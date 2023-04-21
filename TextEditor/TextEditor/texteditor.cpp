#include "texteditor.h"
#include <qDebug>
#include <QFile>
#include <QTextEdit>
#include <QLineEdit>
#include <QFileInfo>
#include <QFileDialog>
#include <QPushButton>
#include <QHBoxLayout>
#include <QTextStream>
#include <QTextCodec>


TextEditor::TextEditor(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	this->setFixedSize(500, 500);

	QTextEdit* txt_edit = new QTextEdit(this);
	txt_edit->move(10, 30);
	txt_edit->setFixedSize(300, 300);


	QLineEdit* ledit = new QLineEdit(this);
	QPushButton* btn = new QPushButton(this);
	btn->move(350, 100);
	btn->setText(QStringLiteral("��"));
	connect(btn, &QPushButton::clicked, [=](){
		QString file_path = QFileDialog::getOpenFileName(this, QStringLiteral("ѡȡ�ļ�"), "F:/",
			"Text files (*.txt);;Images (*.png *.xpm *.jpg);;XML files (*.xml);;Video (*.mp4)");
		ledit->setText(file_path);


		QFileInfo file_info(file_path);
		if (file_info.exists())
		{
			QFile file(file_path);
			if (file.open(QIODevice::ReadOnly | QIODevice::Text))
			{
				QTextStream in(&file);
				in.setCodec("UTF-8");
				QString content = in.readAll();


				//QTextCodec *utf8 = QTextCodec::codecForName("utf-8");
				//QString strUnicode = utf8->toUnicode(content.toLocal8Bit().data()); // ת��Ϊunicode
				txt_edit->setText(content);
				file.close();
			}
			else
			{
				qDebug() << "Failed to open file:" << file_path;
			}
		}

	});

	QWidget* widge = new QWidget(this);
	widge->setFixedSize(400, 120);
	widge->move(10, 350);
	QHBoxLayout* h_layout = new QHBoxLayout;
	h_layout->addWidget(ledit);
	h_layout->addWidget(btn);
	widge->setLayout(h_layout);




	QMenuBar* menubar = menuBar();
	QAction* open_ac = menubar->addAction(QStringLiteral("��"));
	QAction* save_ac = menubar->addAction(QStringLiteral("����"));

	connect(save_ac, &QAction::triggered, [=](){
		
		QString file_path = QFileDialog::getSaveFileName(this, QStringLiteral("�����ļ�"), "", "Text Files (*.txt)");

		QFile file(file_path);
		if (file.open(QIODevice::WriteOnly))
		{
			QTextStream stream(&file);
			stream.setCodec("UTF-8"); // ���ñ���ΪUTF-8
			stream << txt_edit->toPlainText();
			file.close();
		}
		else
		{
			qDebug() << "Failed to save file:" << file_path;
		}

	});

}

TextEditor::~TextEditor()
{

}

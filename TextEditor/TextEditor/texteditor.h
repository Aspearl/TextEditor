#ifndef TEXTEDITOR_H
#define TEXTEDITOR_H

#include <QtWidgets/QMainWindow>
#include "ui_texteditor.h"

class TextEditor : public QMainWindow
{
	Q_OBJECT

public:
	TextEditor(QWidget *parent = 0);
	~TextEditor();

private:
	Ui::TextEditorClass ui;
};

#endif // TEXTEDITOR_H

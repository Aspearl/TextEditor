/********************************************************************************
** Form generated from reading UI file 'texteditor.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTEDITOR_H
#define UI_TEXTEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TextEditorClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TextEditorClass)
    {
        if (TextEditorClass->objectName().isEmpty())
            TextEditorClass->setObjectName(QStringLiteral("TextEditorClass"));
        TextEditorClass->resize(600, 400);
        menuBar = new QMenuBar(TextEditorClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        TextEditorClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TextEditorClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TextEditorClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(TextEditorClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        TextEditorClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(TextEditorClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TextEditorClass->setStatusBar(statusBar);

        retranslateUi(TextEditorClass);

        QMetaObject::connectSlotsByName(TextEditorClass);
    } // setupUi

    void retranslateUi(QMainWindow *TextEditorClass)
    {
        TextEditorClass->setWindowTitle(QApplication::translate("TextEditorClass", "TextEditor", 0));
    } // retranslateUi

};

namespace Ui {
    class TextEditorClass: public Ui_TextEditorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTEDITOR_H

/********************************************************************************
** Form generated from reading UI file 'chat_v.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAT_V_H
#define UI_CHAT_V_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Chat_VClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Chat_VClass)
    {
        if (Chat_VClass->objectName().isEmpty())
            Chat_VClass->setObjectName(QStringLiteral("Chat_VClass"));
        Chat_VClass->resize(600, 400);
        centralWidget = new QWidget(Chat_VClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(70, 60, 75, 23));
        Chat_VClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Chat_VClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        Chat_VClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Chat_VClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Chat_VClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Chat_VClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Chat_VClass->setStatusBar(statusBar);

        retranslateUi(Chat_VClass);

        QMetaObject::connectSlotsByName(Chat_VClass);
    } // setupUi

    void retranslateUi(QMainWindow *Chat_VClass)
    {
        Chat_VClass->setWindowTitle(QApplication::translate("Chat_VClass", "Chat_V", nullptr));
        pushButton->setText(QApplication::translate("Chat_VClass", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Chat_VClass: public Ui_Chat_VClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAT_V_H

/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *startBt;
    QPushButton *pauseBt;
    QPushButton *exitBt;
    QLabel *label;
    QLabel *image;
    QLabel *pato1;
    QLabel *pato2;
    QLabel *pato3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(609, 482);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("background:  rgb(0, 0, 0);"));
        startBt = new QPushButton(centralwidget);
        startBt->setObjectName(QString::fromUtf8("startBt"));
        startBt->setGeometry(QRect(10, 400, 90, 25));
        startBt->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(64, 235, 17);\n"
"font: 700 11pt \"Uroob\";"));
#if QT_CONFIG(shortcut)
        startBt->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        pauseBt = new QPushButton(centralwidget);
        pauseBt->setObjectName(QString::fromUtf8("pauseBt"));
        pauseBt->setGeometry(QRect(130, 400, 88, 25));
        pauseBt->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(165, 29, 45);\n"
"font: 700 11pt \"Uroob\";"));
#if QT_CONFIG(shortcut)
        pauseBt->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        exitBt = new QPushButton(centralwidget);
        exitBt->setObjectName(QString::fromUtf8("exitBt"));
        exitBt->setGeometry(QRect(470, 10, 88, 25));
        exitBt->setStyleSheet(QString::fromUtf8("background-color: #3498db;  /* Define a cor de fundo */\n"
"color: #ffffff;             /* Define a cor do texto */\n"
"font: 700 11pt \"Uroob\";\n"
""));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("QIcon::ThemeIcon::WindowClose")));
        exitBt->setIcon(icon);
#if QT_CONFIG(shortcut)
        exitBt->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 80, 431, 101));
        QFont font;
        font.setFamily(QString::fromUtf8("Vemana2000"));
        font.setPointSize(16);
        font.setBold(true);
        font.setItalic(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(245, 194, 17);\n"
""));
        image = new QLabel(centralwidget);
        image->setObjectName(QString::fromUtf8("image"));
        image->setGeometry(QRect(0, 100, 621, 351));
        pato1 = new QLabel(centralwidget);
        pato1->setObjectName(QString::fromUtf8("pato1"));
        pato1->setEnabled(true);
        pato1->setGeometry(QRect(450, 270, 151, 101));
        pato1->setAutoFillBackground(false);
        pato1->setStyleSheet(QString::fromUtf8("background: transparent; \n"
"border: none;"));
        pato2 = new QLabel(centralwidget);
        pato2->setObjectName(QString::fromUtf8("pato2"));
        pato2->setEnabled(true);
        pato2->setGeometry(QRect(250, 270, 151, 101));
        pato2->setAutoFillBackground(false);
        pato2->setStyleSheet(QString::fromUtf8("background: transparent; \n"
"border: none;"));
        pato3 = new QLabel(centralwidget);
        pato3->setObjectName(QString::fromUtf8("pato3"));
        pato3->setEnabled(true);
        pato3->setGeometry(QRect(360, 230, 151, 101));
        pato3->setAutoFillBackground(false);
        pato3->setStyleSheet(QString::fromUtf8("background: transparent; \n"
"border: none;"));
        MainWindow->setCentralWidget(centralwidget);
        image->raise();
        startBt->raise();
        pauseBt->raise();
        exitBt->raise();
        label->raise();
        pato1->raise();
        pato2->raise();
        pato3->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 609, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        startBt->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        pauseBt->setText(QCoreApplication::translate("MainWindow", "Pause", nullptr));
        exitBt->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><h1 style=\" margin-top:18px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">The Great Duck Run</span></h1></body></html>", nullptr));
        image->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        pato1->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        pato2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        pato3->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

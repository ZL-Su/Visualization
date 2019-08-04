/********************************************************************************
** Form generated from reading UI file 'mainwnd.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWND_H
#define UI_MAINWND_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWndClass
{
public:
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWndClass)
    {
        if (MainWndClass->objectName().isEmpty())
            MainWndClass->setObjectName(QString::fromUtf8("MainWndClass"));
        MainWndClass->resize(600, 400);
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI"));
        MainWndClass->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/MainWnd/ivm.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWndClass->setWindowIcon(icon);
        centralWidget = new QWidget(MainWndClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        MainWndClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWndClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        MainWndClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWndClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWndClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWndClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWndClass->setStatusBar(statusBar);

        retranslateUi(MainWndClass);

        QMetaObject::connectSlotsByName(MainWndClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWndClass)
    {
        MainWndClass->setWindowTitle(QCoreApplication::translate("MainWndClass", "Visualization", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWndClass: public Ui_MainWndClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWND_H

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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWndClass
{
public:
    QAction *actionScatter;
    QAction *actionExit;
    QAction *actionAbout;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuDraw;
    QMenu *menuHelp;
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
        actionScatter = new QAction(MainWndClass);
        actionScatter->setObjectName(QString::fromUtf8("actionScatter"));
        actionExit = new QAction(MainWndClass);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/MainWnd/esc1.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon1);
        actionAbout = new QAction(MainWndClass);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        centralWidget = new QWidget(MainWndClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        MainWndClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWndClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuDraw = new QMenu(menuBar);
        menuDraw->setObjectName(QString::fromUtf8("menuDraw"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWndClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWndClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWndClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWndClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWndClass->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuDraw->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuDraw->addAction(actionScatter);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWndClass);

        QMetaObject::connectSlotsByName(MainWndClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWndClass)
    {
        MainWndClass->setWindowTitle(QCoreApplication::translate("MainWndClass", "Visualization", nullptr));
        actionScatter->setText(QCoreApplication::translate("MainWndClass", "Scatter", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWndClass", "Exit", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWndClass", "About", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWndClass", "File", nullptr));
        menuDraw->setTitle(QCoreApplication::translate("MainWndClass", "Draw", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWndClass", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWndClass: public Ui_MainWndClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWND_H

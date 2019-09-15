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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWndClass
{
public:
    QAction *actionScatter;
    QAction *actionExit;
    QAction *actionAbout;
    QAction *actionOpen;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_StartOpenIcon;
    QPushButton *pbtnStartOpen;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_StartLearnIcon;
    QPushButton *pbtnStartLearn;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QListWidget *lwdgRecentfiles;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_2;
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
        MainWndClass->setDockOptions(QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks);
        MainWndClass->setUnifiedTitleAndToolBarOnMac(false);
        actionScatter = new QAction(MainWndClass);
        actionScatter->setObjectName(QString::fromUtf8("actionScatter"));
        actionExit = new QAction(MainWndClass);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/MainWnd/esc1.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon1);
        actionAbout = new QAction(MainWndClass);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionOpen = new QAction(MainWndClass);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/MainWnd/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon2);
        centralWidget = new QWidget(MainWndClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setAutoFillBackground(false);
        centralWidget->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 46, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(60, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_StartOpenIcon = new QLabel(centralWidget);
        label_StartOpenIcon->setObjectName(QString::fromUtf8("label_StartOpenIcon"));
        label_StartOpenIcon->setMinimumSize(QSize(25, 25));
        label_StartOpenIcon->setMaximumSize(QSize(25, 25));
        label_StartOpenIcon->setPixmap(QPixmap(QString::fromUtf8(":/MainWnd/open.png")));
        label_StartOpenIcon->setScaledContents(true);

        horizontalLayout->addWidget(label_StartOpenIcon);

        pbtnStartOpen = new QPushButton(centralWidget);
        pbtnStartOpen->setObjectName(QString::fromUtf8("pbtnStartOpen"));
        pbtnStartOpen->setAutoDefault(false);
        pbtnStartOpen->setFlat(false);

        horizontalLayout->addWidget(pbtnStartOpen);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_StartLearnIcon = new QLabel(centralWidget);
        label_StartLearnIcon->setObjectName(QString::fromUtf8("label_StartLearnIcon"));
        label_StartLearnIcon->setMinimumSize(QSize(25, 25));
        label_StartLearnIcon->setMaximumSize(QSize(25, 25));
        label_StartLearnIcon->setPixmap(QPixmap(QString::fromUtf8("../../../../../../Dgelo/Pictures/MyIcons/learn.PNG")));

        horizontalLayout_2->addWidget(label_StartLearnIcon);

        pbtnStartLearn = new QPushButton(centralWidget);
        pbtnStartLearn->setObjectName(QString::fromUtf8("pbtnStartLearn"));
        pbtnStartLearn->setAutoDefault(true);
        pbtnStartLearn->setFlat(false);

        horizontalLayout_2->addWidget(pbtnStartLearn);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);


        gridLayout->addLayout(verticalLayout, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(61, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        verticalLayout_2->addWidget(label_2);

        lwdgRecentfiles = new QListWidget(centralWidget);
        lwdgRecentfiles->setObjectName(QString::fromUtf8("lwdgRecentfiles"));
        lwdgRecentfiles->setFrameShadow(QFrame::Plain);

        verticalLayout_2->addWidget(lwdgRecentfiles);


        gridLayout->addLayout(verticalLayout_2, 1, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(60, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 4, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 45, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 1, 1, 1);

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
        menuFile->addAction(actionOpen);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuDraw->addAction(actionScatter);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWndClass);

        pbtnStartOpen->setDefault(false);


        QMetaObject::connectSlotsByName(MainWndClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWndClass)
    {
        MainWndClass->setWindowTitle(QCoreApplication::translate("MainWndClass", "DPLab Visualization", nullptr));
        actionScatter->setText(QCoreApplication::translate("MainWndClass", "Scatter", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWndClass", "Exit", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWndClass", "About", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWndClass", "Open", nullptr));
        label->setText(QCoreApplication::translate("MainWndClass", "Get started", nullptr));
        label_StartOpenIcon->setText(QString());
        pbtnStartOpen->setText(QCoreApplication::translate("MainWndClass", "Open files...", nullptr));
        label_StartLearnIcon->setText(QString());
        pbtnStartLearn->setText(QCoreApplication::translate("MainWndClass", "Learn...", nullptr));
        label_2->setText(QCoreApplication::translate("MainWndClass", "Recent files", nullptr));
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

/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *logo;
    QLabel *copyright;

    void setupUi(QWidget *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QString::fromUtf8("AboutDialog"));
        AboutDialog->resize(268, 109);
        AboutDialog->setMaximumSize(QSize(268, 109));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI Semibold"));
        font.setBold(true);
        font.setWeight(75);
        AboutDialog->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/MainWnd/ivm.ico"), QSize(), QIcon::Normal, QIcon::Off);
        AboutDialog->setWindowIcon(icon);
        AboutDialog->setAutoFillBackground(false);
        verticalLayout = new QVBoxLayout(AboutDialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        logo = new QLabel(AboutDialog);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setMaximumSize(QSize(250, 70));
        logo->setPixmap(QPixmap(QString::fromUtf8("../../../../../../Dgelo/Pictures/MyIcons/LOGO_H.png")));
        logo->setScaledContents(true);

        verticalLayout->addWidget(logo);

        copyright = new QLabel(AboutDialog);
        copyright->setObjectName(QString::fromUtf8("copyright"));
        copyright->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(copyright);


        retranslateUi(AboutDialog);

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QWidget *AboutDialog)
    {
        AboutDialog->setWindowTitle(QCoreApplication::translate("AboutDialog", "About", nullptr));
        logo->setText(QString());
        copyright->setText(QCoreApplication::translate("AboutDialog", "Copyright (C) 2019 Dgelom Su", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H

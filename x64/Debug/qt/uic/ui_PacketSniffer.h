/********************************************************************************
** Form generated from reading UI file 'PacketSniffer.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PACKETSNIFFER_H
#define UI_PACKETSNIFFER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PacketSnifferClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PacketSnifferClass)
    {
        if (PacketSnifferClass->objectName().isEmpty())
            PacketSnifferClass->setObjectName(QString::fromUtf8("PacketSnifferClass"));
        PacketSnifferClass->resize(600, 400);
        menuBar = new QMenuBar(PacketSnifferClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        PacketSnifferClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(PacketSnifferClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        PacketSnifferClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(PacketSnifferClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        PacketSnifferClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(PacketSnifferClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        PacketSnifferClass->setStatusBar(statusBar);

        retranslateUi(PacketSnifferClass);

        QMetaObject::connectSlotsByName(PacketSnifferClass);
    } // setupUi

    void retranslateUi(QMainWindow *PacketSnifferClass)
    {
        PacketSnifferClass->setWindowTitle(QCoreApplication::translate("PacketSnifferClass", "PacketSniffer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PacketSnifferClass: public Ui_PacketSnifferClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PACKETSNIFFER_H

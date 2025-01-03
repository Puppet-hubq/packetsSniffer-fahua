#include "mainwindow.h"
#include <QtWidgets/QApplication>
#include <QDesktopWidget>
#include <QStyle>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PacketSniffer w;
    w.setWindowTitle("HongKe");
    /*
        w.setGeometry(
        QStyle::alignedRect(
            Qt::LeftToRight,
            Qt::AlignCenter,
            w.size(),
            a.desktop()->availableGeometry()
        )
    );*/

    w.show();
    return a.exec();
}

#pragma once

#include <QtWidgets/QMainWindow>
#include<QStandardItemModel>
#include<QsortFilterProxyModel>
#include "ui_PacketSniffer.h"

#include<vector>

namespace Ui {
    class PacketSniffer;
}

class PacketSniffer : public QMainWindow
{
    Q_OBJECT

public:
    explicit PacketSniffer(QWidget *parent = nullptr);
    ~PacketSniffer();
/*
private slots:
    void on_startCaptureButton_clicked();                                   //开始数据包捕获
    void on_stopCaptureButton_clicked();                                    //停止数据包捕获
    void on_actionResize_columns_triggered();                               //根据内容调整列宽
    void on_packetTableView_clicked(const QModelIndex &index);              //一个数据包被点击
    void on_filterLineEdit_returnPressed();                                 //用户在过滤器上按了回车键，应用过滤

    void on_hexViewRawButton_clicked();     //用户想将原始数据包视图切换为16进制
    void on_binViewRawButton_clicked();     //用户想将原始数据包视图切换为二进制

    void on_clearFilterButton_clicked();    //用户想要清除过滤器中的文本信息

    void on_actionSave_triggered();         //保存当前已捕获的数据，仅在未开启捕获状态下有效

    void on_pauseCaptureButton_clicked();   //停止捕获按钮被按下执行的操作

    void on_actionNew_capture_triggered();  //进行新的捕获操作执行的逻辑

    void on_actionOpen_triggered();         //执行打开文件执行的操作

    void on_deleteCaptureButton();          //删除捕获按钮被按下执行的操作

    void on_actionStart_triggered();

    void on_actionPause_triggered();

    void on_actionClear_triggered();

    */
private:
    Ui::PacketSnifferClass ui;
    int numPackets;         //记录捕获到的数据包的数量
    QStandardItemModel* packetModel;
    QSortFilterProxyModel* packetModelProxy;
    //PacketSnifferThread * packetSnifferThread;
};

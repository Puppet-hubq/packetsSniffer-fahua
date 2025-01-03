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
    void on_startCaptureButton_clicked();                                   //��ʼ���ݰ�����
    void on_stopCaptureButton_clicked();                                    //ֹͣ���ݰ�����
    void on_actionResize_columns_triggered();                               //�������ݵ����п�
    void on_packetTableView_clicked(const QModelIndex &index);              //һ�����ݰ������
    void on_filterLineEdit_returnPressed();                                 //�û��ڹ������ϰ��˻س�����Ӧ�ù���

    void on_hexViewRawButton_clicked();     //�û��뽫ԭʼ���ݰ���ͼ�л�Ϊ16����
    void on_binViewRawButton_clicked();     //�û��뽫ԭʼ���ݰ���ͼ�л�Ϊ������

    void on_clearFilterButton_clicked();    //�û���Ҫ����������е��ı���Ϣ

    void on_actionSave_triggered();         //���浱ǰ�Ѳ�������ݣ�����δ��������״̬����Ч

    void on_pauseCaptureButton_clicked();   //ֹͣ����ť������ִ�еĲ���

    void on_actionNew_capture_triggered();  //�����µĲ������ִ�е��߼�

    void on_actionOpen_triggered();         //ִ�д��ļ�ִ�еĲ���

    void on_deleteCaptureButton();          //ɾ������ť������ִ�еĲ���

    void on_actionStart_triggered();

    void on_actionPause_triggered();

    void on_actionClear_triggered();

    */
private:
    Ui::PacketSnifferClass ui;
    int numPackets;         //��¼���񵽵����ݰ�������
    QStandardItemModel* packetModel;
    QSortFilterProxyModel* packetModelProxy;
    //PacketSnifferThread * packetSnifferThread;
};

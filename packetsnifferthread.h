#pragma once

#include<vector>

#include<QThread>
#include<QStandardItemModel>
#include<QStatusBar>
#include<QPlainTextEdit>

//ԭʼֵ����
enum RawDataView {
	Hexadecimal,
	Binary
};

//���ݰ���̽�߳���
class PacketSnifferThread :public QThread {   
public:
	PacketSnifferThread(QStandardItemModel *packetModel, QStatusBar* statusBar);
	PacketSnifferThread(QStandardItemModel* packetModel, QString filePath, QStatusBar* statusBar);
	~PacketSnifferThread();//����

private:
	std::vector<char*>		rawData;		//�������ݰ���ԭʼ����������
	std::vector<time_t>		timeStamps;		//ÿ�����ݰ���ʱ���
	QStandardItemModel		*packetModel;	//��Ų������ݰ��ı�׼����ģ��
	QStatusBar* statusBar;					//�ײ�״̬����ʾ״̬��Ϣ
	bool					stopCapture;	
	int						pavketNumber;	//������ͳ��
	RawDataView				rawDataView;	//ԭʼ������ʾ����
	bool					captureSaved;

	void run();

public:
	void stopCapturing();
	void fileInfoAndRawDataWidgets(QPlainTextEdit* infoTextEdit, int index, int size);//��ʾԭʼ����ҳ�棬���ı�
	void setRawDataView(RawDataView rawDataView);//����ԭʼ������ʾ��ʽ��ö�٣������ƻ�ʮ������

	bool saveCapture(QString filePath);//���沶������
	void saveCaptureAs(void);
	void openCapture(void);

};
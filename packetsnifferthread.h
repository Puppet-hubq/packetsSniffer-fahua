#pragma once

#include<vector>

#include<QThread>
#include<QStandardItemModel>
#include<QStatusBar>
#include<QPlainTextEdit>

//原始值界面
enum RawDataView {
	Hexadecimal,
	Binary
};

//数据包嗅探线程类
class PacketSnifferThread :public QThread {   
public:
	PacketSnifferThread(QStandardItemModel *packetModel, QStatusBar* statusBar);
	PacketSnifferThread(QStandardItemModel* packetModel, QString filePath, QStatusBar* statusBar);
	~PacketSnifferThread();//析构

private:
	std::vector<char*>		rawData;		//保存数据包的原始二进制数据
	std::vector<time_t>		timeStamps;		//每个数据包的时间戳
	QStandardItemModel		*packetModel;	//存放捕获数据包的标准数据模型
	QStatusBar* statusBar;					//底部状态栏显示状态信息
	bool					stopCapture;	
	int						pavketNumber;	//包数量统计
	RawDataView				rawDataView;	//原始数据显示界面
	bool					captureSaved;

	void run();

public:
	void stopCapturing();
	void fileInfoAndRawDataWidgets(QPlainTextEdit* infoTextEdit, int index, int size);//显示原始数据页面，富文本
	void setRawDataView(RawDataView rawDataView);//设置原始数据显示格式，枚举：二进制或十六进制

	bool saveCapture(QString filePath);//保存捕获数据
	void saveCaptureAs(void);
	void openCapture(void);

};
#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_chat_v.h"
#include "tcp_client.h"


class Chat_V : public QMainWindow
{
	Q_OBJECT

public:
	Chat_V(tcp_client *tcpo, QWidget *parent = Q_NULLPTR);
	tcp_client *saveptr;
private:
	Ui::Chat_VClass ui;
	private slots:
	void on_pushButton_clicked();
};

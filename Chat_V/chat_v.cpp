#include "chat_v.h"

Chat_V::Chat_V(tcp_client *tcpo,QWidget *parent)
	: QMainWindow(parent)
{
	saveptr = tcpo;
	ui.setupUi(this);
}

void Chat_V::on_pushButton_clicked() {
	saveptr->WriteTest();
	
}
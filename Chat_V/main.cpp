#include "chat_v.h"
#include <QtWidgets/QApplication>
#include "tcp_client.h"

int main(int argc, char *argv[])
{
	tcp_client *tcpo = new tcp_client;
	tcpo->start();
	QApplication a(argc, argv);
	Chat_V w(tcpo);
	w.show();
	
	return a.exec();
}

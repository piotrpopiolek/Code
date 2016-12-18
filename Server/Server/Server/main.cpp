#include "Server.h"

int main()
{
	Server MyServer(110); 
	for (int i = 0; i < 100; i++) 
	{
		MyServer.ListenForNewConnection(); 
	}
	system("pause");
	return 0;
}
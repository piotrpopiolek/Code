#pragma once
#define _WINSOCK_DEPRECATED_NO_WARNINGS

#pragma comment(lib,"ws2_32.lib") 
#include <WinSock2.h> 
#include <string> 
#include <iostream> 
#include "FileTransferData.h"
#include "PacketType.h"
#include <vector>
#include <string>
using namespace std;
using std::vector;
class Client
{
public: 
	Client(std::string IP, int PORT);
	bool Connect();
	
	bool SendString(std::string & _string, bool IncludePacketType = true);
	bool CloseConnection();
	bool RequestFile(std::string FileName);
private: 
	bool ProcessPacketType(PacketType _PacketType);
	static void ClientThread();
	
	bool sendall(char * data, int totalbytes);
	bool Sendint32_t(int32_t _int32_t);
	bool SendPacketType(PacketType _PacketType);

	bool recvall(char * data, int totalbytes);
	bool Getint32_t(int32_t & _int32_t);
	bool GetPacketType(PacketType & _PacketType);
	bool GetString(std::string & _string);
	

public:

private:
	void SaveZalaczniki(string filename);
	FileTransferData file; 
	SOCKET Connection;
	SOCKADDR_IN addr; 
	int sizeofaddr = sizeof(addr); 
};

static Client * clientptr; //Wskaznik pozwalajacy watkowi na dostep do metod i instancji klienta.

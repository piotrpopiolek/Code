#pragma once
#define _WINSOCK_DEPRECATED_NO_WARNINGS
#define WIN32_LEAN_AND_MEAN
#include "stdafx.h"
#pragma comment(lib,"ws2_32.lib") 
#include <WinSock2.h> 
#include <string> 
#include <iostream> 
#include "FileTransferData.h"
#include "PacketManager.h"
#include "PacketStructs.h"
#include <vector> 
#include <string>
#include "sqlite3.h"
using std::string;
using std::vector;
class Connection
{
public:
	Connection(SOCKET socket_)
	{
		socket = socket_;
		ActiveConnection = true; 
	}
	bool ActiveConnection; 
	SOCKET socket;
	
	FileTransferData file;
	PacketManager pm; 
};

class Server
{
public:
	Server(int PORT, bool BroadcastPublically = false);
	bool ListenForNewConnection();
	const int userSize = 2;
	vector<vector<string>> Users = 
	{ {"Piotr","Sieci1","Poczta2"},
	{"Mateusz","Sieci2","Poczta3"},
	{ "Marek","Sieci3","Poczta3" },
	{ "Karol","Sieci4","Poczta3" } };

private:
	
	bool sendall(int ID, char * data, int totalbytes);
	bool recvall(int ID, char * data, int totalbytes);

	bool Getint32_t(int ID, int32_t & _int32_t);
	bool GetPacketType(int ID, PacketType & _packettype);

	void SendString(int ID, std::string & _string);
	bool GetString(int ID, std::string & _string);

	bool ProcessPacket(int ID, PacketType _packettype);
	bool HandleSendFile(int ID);

	static void ClientHandlerThread(int ID);
	static void PacketSenderThread();

	void ConnectBase();
	void Show_Mails(int ID, const vector<vector<string>> & Baza_Maili);
	void Sort_Mails(int ID, string str);
	void Retr(int ID, const vector<vector<string>> & Baza_Maili,int var);
	void Delete(int ID, vector<vector<string>> & Baza_Maili, int var);

	void DisconnectClient(int ID); 
private:
	std::vector<std::shared_ptr<Connection>> connections;
	std::mutex connectionMgr_mutex; 
	int UnusedConnections = 0; 

	SOCKADDR_IN addr; 
	int addrlen = sizeof(addr);
	SOCKET sListen;
};

static Server * serverptr; 
#include "Server.h"
using std::cout;
using std::endl;
using std::cin;
vector<vector<string>> Baza_Maili;
Server::Server(int PORT, bool BroadcastPublically) 
{
	WSAData wsaData;
	WORD DllVersion = MAKEWORD(2, 1);
	if (WSAStartup(DllVersion, &wsaData) != 0)
	{
		MessageBoxA(NULL, "WinSock zle wystartowal", "Error", MB_OK | MB_ICONERROR);
		exit(1);
	}

	if (BroadcastPublically) 
		addr.sin_addr.s_addr = htonl(INADDR_ANY);
	else 
		addr.sin_addr.s_addr = inet_addr("127.0.0.1"); 
	addr.sin_port = htons(PORT); 
	addr.sin_family = AF_INET; 

	sListen = socket(AF_INET, SOCK_STREAM, NULL); 
	if (bind(sListen, (SOCKADDR*)&addr, sizeof(addr)) == SOCKET_ERROR) 
	{
		std::string ErrorMsg = "Blad wiazania adresu. Winsock Error:" + std::to_string(WSAGetLastError());
		MessageBoxA(NULL, ErrorMsg.c_str(), "Error", MB_OK | MB_ICONERROR);
		exit(1);
	}
	if (listen(sListen, SOMAXCONN) == SOCKET_ERROR) 
	{
		std::string ErrorMsg = "Blad nasluchu Winsock Error:" + std::to_string(WSAGetLastError());
		MessageBoxA(NULL, ErrorMsg.c_str(), "Error", MB_OK | MB_ICONERROR);
		exit(1);
	}
	serverptr = this;
	CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)PacketSenderThread, NULL, NULL, NULL);
}

bool Server::ListenForNewConnection()
{
	SOCKET newConnectionSocket = accept(sListen, (SOCKADDR*)&addr, &addrlen);
	if (newConnectionSocket == 0) 
	{
		std::cout << "Niepoprawna akceptacja polaczenia z klientem." << std::endl;
		return false;
	}
	else 
	{
		std::lock_guard<std::mutex> lock(connectionMgr_mutex); 
		int NewConnectionID = connections.size(); 
		if (UnusedConnections > 0) 
		{
			for (size_t i = 0; i < connections.size(); i++) 
			{
				if (connections[i]->ActiveConnection == false)
				{
					connections[i]->socket = newConnectionSocket;
					connections[i]->ActiveConnection = true;
					NewConnectionID = i;
					UnusedConnections -= 1;
					break;
				}
			}
		}
		else 
		{
			std::shared_ptr<Connection> newConnection(new Connection(newConnectionSocket));
			connections.push_back(newConnection); 
		}
		std::cout << "Klient podlaczony! ID:" << NewConnectionID << std::endl;
		CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)ClientHandlerThread, (LPVOID)(NewConnectionID), NULL, NULL); 
		return true;
	}
}

bool Server::ProcessPacket(int ID, PacketType _packettype)
{
	switch (_packettype)
	{
	case PacketType::ChatMessage: 
	{
		std::string message;
		if (!GetString(ID, message)) 
			return false; 
		cout << message << endl;
		string command;
		int i = 0;
		for (int i = 0; i < 4; i++)
		{
			command.push_back(message[i]);
		}
		if (command == "user")
		{
			string login;
			int k = 5;
			while (message[k] != ' ')
			{
				login.push_back(message[k]);
				k++;
			}
			cout << "Polecenie user" << endl;
			bool Zalogowany = false;
			while(!Zalogowany && i<userSize)
			{
				if (login == Users[i][0])
				{
					string temp = "+OK " + login + " selected";
					SendString(ID, temp);
					Zalogowany = true;
					break;
				}
				i++;
			}
			if (!Zalogowany)
			{
				message = "Podales zly login do logowania";
				SendString(ID, message);
			}
			break;
		}
		if (command == "pass")
		{
			cout << "Polecenie pass" << endl;
			string haslo;
			int k = 5;
			while (message[k] != ' ')
			{
				haslo.push_back(message[k]);
				k++;
			}
			int i = 0;
			bool Zalogowany = false;
			while (!Zalogowany && i < userSize)
			{
				if (haslo == Users[i][1])
				{
					cout << "Uzytkownik: " << Users[i][0] << " zalogowany" << endl;
					Zalogowany = true;
					message = "+OK Congratulations!";
					SendString(ID, message);
					ConnectBase();
				}
				else
				{
					message = "Podales zle haslo do logowania";
					SendString(ID, message);
					break;
				}
			}
			break;
		}
		if (command == "list")
		{
			cout << "Polecenie list" << endl;
			Show_Mails(ID, Baza_Maili);
			break;
		}
		if (command == "retr")
		{
			cout << "Polecenie retr" << endl;
			string Number;
			int k = 5;
			while (message[k] != ' ')
			{
				Number.push_back(message[k]);
				k++;
			}
			int var = 0;
			unsigned int multi = 1;
			for (int i = Number.size() - 1; i >= 0; i--)
			{
				var += (Number[i] - 48)*multi;
				multi *= 10;
			}
			var -= 1;
			Retr(ID, Baza_Maili, var);
			break;
		}
		if (command == "sort")
		{
			cout << "Polecenie sort" << endl;
			string Number;
			int k = 5;
			while (message[k] != ' ')
			{
				Number.push_back(message[k]);
				k++;
			}
			int var = 0;
			unsigned int multi = 1;
			for (int i = Number.size() - 1; i >= 0; i--)
			{
				var += (Number[i] - 48)*multi;
				multi *= 10;
			}
			var;
			string Var;
			cout << var << endl;
			switch (var)
			{
			case 1:
			{
				Var = "Temat";
				break;
			}
			case 2:
			{
				Var = "Data";
				break;
			}
			case 3:
			{
				Var = "Nadawca";
				break;
			}
			}
			Sort_Mails(ID, Var);
			break;
		}
		if (command == "dele")
		{
			cout << "Polecenie dele" << endl;
			string Number;
			int k = 5;
			while (message[k] != ' ')
			{
				Number.push_back(message[k]);
				k++;
			}
			int var = 0;
			unsigned int multi = 1;
			for (int i = Number.size() - 1; i >= 0; i--)
			{
				var += (Number[i] - 48)*multi;
				multi *= 10;
			}
			var -= 1;
			Delete(ID, Baza_Maili, var);
			break;
		}
		if (command == "quit")
		{
			cout << "Polecenie quit" << endl; 
			string Answer = "+OK Was it as good for you, as it was for me? ";
			SendString(ID, Answer);
			Sleep(5000);
			DisconnectClient(ID);
			break;
		}
		break;
	}
	case PacketType::FileTransferRequestFile:
	{
		std::string FileName; 
		if (!GetString(ID, FileName)) 
			return false;

		connections[ID]->file.infileStream.open(FileName, std::ios::binary | std::ios::ate); 
		if (!connections[ID]->file.infileStream.is_open()) 
		{
			std::cout << "Klient: " << ID << " zada pliku: " << FileName << ", ale taki plik nie istnieje." << std::endl;
			std::string ErrMsg = "Zadanie pliku: " + FileName + " nie znalezniono takiego pliku.";
			SendString(ID, ErrMsg);
			return true;
		}

		connections[ID]->file.fileName = FileName; 
		connections[ID]->file.fileSize = connections[ID]->file.infileStream.tellg(); 
		connections[ID]->file.infileStream.seekg(0); 
		connections[ID]->file.fileOffset = 0; 
		
		if (!HandleSendFile(ID)) 
			return false;
		break;
	}
	case PacketType::FileTransferRequestNextBuffer:
	{
		if (!HandleSendFile(ID)) 
			return false;
		break;
	}
	default: 
	{
		std::cout << "Nierozpoznanych paczek: " << (int32_t)_packettype << std::endl; 
		break;
	}
	}
	return true;
}

bool Server::HandleSendFile(int ID)
{
	if (connections[ID]->file.fileOffset >= connections[ID]->file.fileSize) 
		return true;
	
	connections[ID]->file.remainingBytes = connections[ID]->file.fileSize - connections[ID]->file.fileOffset; 
	if (connections[ID]->file.remainingBytes > connections[ID]->file.buffersize) 
	{
		PS::FileDataBuffer fileData; 
		connections[ID]->file.infileStream.read(fileData.databuffer, connections[ID]->file.buffersize); 
		fileData.size = connections[ID]->file.buffersize; 
		connections[ID]->file.fileOffset += connections[ID]->file.buffersize; 
		connections[ID]->pm.Append(fileData.toPacket()); 
	}
	else
	{
		PS::FileDataBuffer fileData; 
		connections[ID]->file.infileStream.read(fileData.databuffer, connections[ID]->file.remainingBytes); 
		fileData.size = connections[ID]->file.remainingBytes; 
		connections[ID]->file.fileOffset += connections[ID]->file.remainingBytes; 
		connections[ID]->pm.Append(fileData.toPacket()); 
	}

	if (connections[ID]->file.fileOffset == connections[ID]->file.fileSize) 
	{
		Packet EOFPacket(PacketType::FileTransfer_EndOfFile); 
		connections[ID]->pm.Append(EOFPacket); 
		std::cout << std::endl << "Plik wyslany: " << connections[ID]->file.fileName << std::endl;
		std::cout << "Rozmiar pliku(bytes): " << connections[ID]->file.fileSize << std::endl << std::endl;
	}
	return true;
}

void Server::ClientHandlerThread(int ID) 
{
	PacketType packettype;
	while (true)
	{
		if (!serverptr->GetPacketType(ID, packettype)) 
			break; 
		if (!serverptr->ProcessPacket(ID, packettype)) 
			break;
	}
	std::cout << "Utracone polaczenie z klientem o ID: " << ID << std::endl;
	serverptr->DisconnectClient(ID); 
	return;
}

void Server::PacketSenderThread() 
{
	while (true)
	{
		for (size_t i = 0; i < serverptr->connections.size(); i++) 
		{
			if (serverptr->connections[i]->pm.HasPendingPackets()) 
			{
				Packet p = serverptr->connections[i]->pm.Retrieve(); 
				if (!serverptr->sendall(i, p.buffer, p.size)) 
				{
					std::cout << "Blad wysylania do ID: " << i << std::endl; 
				}
				delete p.buffer; 
			}
		}
		Sleep(5);
	}
}

void Server::DisconnectClient(int ID) 
{
	std::lock_guard<std::mutex> lock(connectionMgr_mutex); 
	if (connections[ID]->ActiveConnection == false) 
	{
		return; 
	}
	connections[ID]->pm.Clear(); 
	connections[ID]->ActiveConnection = false; 
	closesocket(connections[ID]->socket); 
	if (ID == (connections.size() - 1)) 
	{
		connections.pop_back(); 
		

		for (size_t i = connections.size() - 1; i >= 0 && connections.size()>0; i--)
		{
			if (connections[i]->ActiveConnection) 
				break;
			
			connections.pop_back(); 
			UnusedConnections -= 1;
		}
	}
	else
	{
		UnusedConnections += 1;
	}
}
void Server::ConnectBase()
{
	sqlite3 *db;
	sqlite3_open("Poczta2.db", &db);
	sqlite3_stmt *statement;
	char id = 1;
	string command = "SELECT * FROM poczta";
	cout << "Komenda SQL: " << command << endl;
	int ilosc_rekordow = 10;
	int ctotal;
		if (sqlite3_prepare(db, command.c_str(), -1, &statement, 0) == SQLITE_OK)
		{

			ctotal = sqlite3_column_count(statement);
			int res = 0;
			int k = 0;
			while (1)
			{
				res = sqlite3_step(statement);

				if (res == SQLITE_ROW)
				{
					vector<string> Mail;
					for (int i = 0; i < ctotal; i++)
					{
						string s = (char*)sqlite3_column_text(statement, i);
						Mail.push_back(s);
					}
					Baza_Maili.push_back(Mail);
				}

				if (res == SQLITE_DONE || res == SQLITE_ERROR)
				{
					break;
				}
			}
		}
}
void Server::Show_Mails(int ID, const vector<vector<string>> & Baza_Maili)
{
	const int size = 4;
	vector<string> Naglowki(size);
	Naglowki = { "Numer: ", "Temat: ", "Data: ", "Nadawca: " };
	string temp = "+OK ";
	temp += std::to_string(Baza_Maili.size());
	temp += " messages";
	SendString(ID, temp);
	for (int i = 0; i < Baza_Maili.size(); i++)
	{
		for (int j = 0; j < size; j++)
		{
			string Temp = Baza_Maili[i][j];
			SendString(ID, Naglowki[j]+Temp);
		}
	}
}
void Server::Sort_Mails(int ID, string str)
{
	sqlite3 *db;
	sqlite3_open("Poczta2.db", &db);
	sqlite3_stmt *statement;
	string query = "SELECT * FROM poczta ORDER BY " + str + " ASC";
	cout << "Komenda SQL: " << query << endl;
	int ctotal;
	vector<vector<string>> Baza_Maili;
	if (sqlite3_prepare(db, query.c_str(), -1, &statement, 0) == SQLITE_OK)
	{

		ctotal = sqlite3_column_count(statement);
		int res = 0;
		int k = 0;
		while (1)
		{
			res = sqlite3_step(statement);

			if (res == SQLITE_ROW)
			{
				vector<string> Mail;
				for (int i = 0; i < ctotal; i++)
				{
					string s = (char*)sqlite3_column_text(statement, i);
					Mail.push_back(s);
				}
				Baza_Maili.push_back(Mail);
			}

			if (res == SQLITE_DONE || res == SQLITE_ERROR)
			{
				break;
			}
		}
	}
	Show_Mails(ID, Baza_Maili);
}
void Server::Retr(int ID, const vector<vector<string>> & Baza_Maili, int var)
{
	string Answer = "+OK";
	SendString(ID, Answer);
	vector<string> Naglowki(Baza_Maili[0].size());
	Naglowki = { "Numer: ", "Temat: ", "Data: ", "Nadawca: ", "Tresc: ","Zalacznik:" };
	for (int j = 0; j < Baza_Maili[0].size(); j++)
	{
		string Temp = Baza_Maili[var][j];
		SendString(ID, Naglowki[j] + Temp);
	}
}
void Server::Delete(int ID, vector<vector<string>> & Baza_Maili, int var)
{
	string Answer = "+OK Message " + std::to_string(var + 1) + " deleted";
	SendString(ID, Answer);
	sqlite3 *db;
	sqlite3_open("Poczta2.db", &db);
	sqlite3_stmt *statement;
	string command = "DELETE FROM poczta WHERE id=";
	string query = command + std::to_string(var);

	Baza_Maili.erase(Baza_Maili.begin() + var );
}
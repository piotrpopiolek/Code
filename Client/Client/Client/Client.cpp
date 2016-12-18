#include "Client.h"
using std::cout;
using std::endl;
using std::string;
bool Client::ProcessPacketType(PacketType _PacketType)
{
	switch (_PacketType)
	{
	case PacketType::ChatMessage: 
	{
		std::string Message; 
		if (!GetString(Message)) 
			return false; //Jesli GetString() zwroci falsz przerwij
		std::cout << Message << std::endl; 
		string command;
		for (int i = 0; i < 4; i++)
		{
			command.push_back(Message[i]);
		}
		if (command == "Zala")
		{
			string filename;
			for (int i = 10; i < Message.length(); i++)
			{
				filename.push_back(Message[i]);
			}
			SaveZalaczniki(filename);
		}
			break;
	}
	case PacketType::FileTransferByteBuffer:
	{
		int32_t buffersize; 
		if (!Getint32_t(buffersize)) 
			return false;
		if (!recvall(file.buffer, buffersize)) 
		{
			return false;
		}
		file.outfileStream.write(file.buffer, buffersize); 
		file.bytesWritten += buffersize; 
		std::cout << "Otrzymany buffor pliku: " << buffersize << std::endl;
		if (!SendPacketType(PacketType::FileTransferRequestNextBuffer)) 
			return false;
		break;
	}
	case PacketType::FileTransfer_EndOfFile:
	{
		std::cout << "Wysylanie zakonczone. Plik otrzymany." << std::endl;
		std::cout << "Nazwa pliku: " << file.fileName << std::endl;
		std::cout << "Rozmiar pliku(bytes): " << file.bytesWritten << std::endl;
		file.bytesWritten = 0;
		file.outfileStream.close(); 
		break;
	}
	default: 
		std::cout << "Nierozpoznane paczki: " << (int32_t)_PacketType << std::endl; 
		break;
	}
	return true;
}

void Client::ClientThread()
{
	PacketType PacketType;
	while (true)
	{
		if (!clientptr->GetPacketType(PacketType)) 
			break; 
		if (!clientptr->ProcessPacketType(PacketType)) 
			break; 
	}
	std::cout << "Utracone polacznie z serwerem." << std::endl;
	if (clientptr->CloseConnection()) 
	{
		std::cout << "Polaczenie zamknieto prawidlowo." << std::endl;
	}
	else 
	{
		std::cout << "Nie udalo sie zamknac prawidlowo polaczenia." << std::endl;
	}
}

bool Client::RequestFile(std::string FileName)
{
	file.outfileStream.open(FileName, std::ios::binary); 
	file.fileName = FileName; 
	file.bytesWritten = 0; 
	if (!file.outfileStream.is_open()) 
	{
		std::cout << "Blad: Funkcja(Client::RequestFile) - Nie otworzyla: " << FileName << " do zapisu.\n";
		return false;
	}
	std::cout << "Zadanie pliku z serwera: " << FileName << std::endl;
	if (!SendPacketType(PacketType::FileTransferRequestFile)) 
		return false;
	if (!SendString(FileName, false)) 
		return false;
	return true;
}

Client::Client(std::string IP, int PORT)
{
	WSAData wsaData;
	WORD DllVersion = MAKEWORD(2, 1);
	if (WSAStartup(DllVersion, &wsaData) != 0)
	{
		MessageBoxA(NULL, "Winsock startup failed", "Error", MB_OK | MB_ICONERROR);
		exit(0);
	}

	addr.sin_addr.s_addr = inet_addr(IP.c_str());
	addr.sin_port = htons(PORT); 
	addr.sin_family = AF_INET; //IPv4 Socket
	clientptr = this; //Wskaznik na klienta
}

bool Client::Connect()
{
	Connection = socket(AF_INET, SOCK_STREAM, NULL); 
	if (connect(Connection, (SOCKADDR*)&addr, sizeofaddr) != 0) 
	{
		MessageBoxA(NULL, "Failed to Connect", "Error", MB_OK | MB_ICONERROR);
		return false;
	}

	std::cout << "Podlaczony!" << std::endl;
	CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)ClientThread, NULL, NULL, NULL); 
	return true;
}

bool Client::CloseConnection()
{
	if (closesocket(Connection) == SOCKET_ERROR)
	{
		if (WSAGetLastError() == WSAENOTSOCK) 
			return true; 

		std::string ErrorMessage = "Failed to close the socket. Winsock Error: " + std::to_string(WSAGetLastError()) + ".";
		MessageBoxA(NULL, ErrorMessage.c_str(), "Error", MB_OK | MB_ICONERROR);
		return false;
	}
	return true;
}
void Client::SaveZalaczniki(string filename)
{
	ofstream zapis;
	string nazwa = "Zalaczniki.txt";
	zapis.open(nazwa, ios::trunc);
	if (!zapis.is_open())
	{
		cout << "Nie udalo sie otworzyc pliku\n";
		system("pause");
		exit(EXIT_FAILURE);
	}
		zapis << filename << endl;
}

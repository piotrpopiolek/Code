#include "Server.h"

bool Server::recvall(int ID, char * data, int totalbytes)
{
	int bytesreceived = 0; 
	while (bytesreceived < totalbytes) 
	{
		int RetnCheck = recv(connections[ID]->socket, data, totalbytes - bytesreceived, NULL);
		if (RetnCheck == SOCKET_ERROR) 
			return false; 
		bytesreceived += RetnCheck; 
	}
	return true; 
}

bool Server::sendall(int ID, char * data, int totalbytes)
{
	int bytessent = 0;
	while (bytessent < totalbytes)
	{
		int RetnCheck = send(connections[ID]->socket, data + bytessent, totalbytes - bytessent, NULL); 
		if (RetnCheck == SOCKET_ERROR) 
			return false;
		bytessent += RetnCheck; 
	}
	return true; 
}

bool Server::Getint32_t(int ID, int32_t & _int32_t)
{
	if (!recvall(ID, (char*)&_int32_t, sizeof(int32_t))) 
		return false; 
	_int32_t = ntohl(_int32_t); 
	return true;
}

bool Server::GetPacketType(int ID, PacketType & _packettype)
{
	int packettype;
	if (!Getint32_t(ID, packettype))
		return false;
	_packettype = (PacketType)packettype;
	return true;
}

void Server::SendString(int ID, std::string & _string)
{
	PS::ChatMessage message(_string);
	connections[ID]->pm.Append(message.toPacket());
}

bool Server::GetString(int ID, std::string & _string)
{
	int32_t bufferlength; 
	if (!Getint32_t(ID, bufferlength))
		return false; 
	char * buffer = new char[bufferlength + 1]; 
	buffer[bufferlength] = '\0'; 
	if (!recvall(ID, buffer, bufferlength)) 
	{
		delete[] buffer;
		return false; 
	}
	_string = buffer; 
	delete[] buffer;
	return true;
}

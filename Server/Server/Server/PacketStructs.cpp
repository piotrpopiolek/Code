#include "PacketStructs.h"
#include <Windows.h>


namespace PS
{
	ChatMessage::ChatMessage(std::string msg)
	{
		message = msg;
	}

	Packet ChatMessage::toPacket()
	{
		const int packetsize = sizeof(int32_t) * 2 + message.size()*sizeof(char); 
		char * buffer = new char[packetsize]; 
		int32_t packettype = htonl((int32_t)PacketType::ChatMessage); 
		int32_t messagesize = htonl(message.size()); 
		memcpy(buffer, &packettype, sizeof(int32_t)); 
		memcpy(buffer + sizeof(int32_t), &messagesize, sizeof(int32_t)); 
		memcpy(buffer + sizeof(int32_t) * 2, message.c_str(), message.size()*sizeof(char)); 
		Packet p(buffer, packetsize); 
		return p;
	}

	Packet FileDataBuffer::toPacket()
	{
		const int packetsize = sizeof(int32_t) * 2 + size; 
		char * buffer = new char[packetsize]; 
		int32_t packettype = htonl((int32_t)PacketType::FileTransferByteBuffer);
		int32_t buffersize = htonl(size); 
		memcpy(buffer, &packettype, sizeof(int32_t)); 
		memcpy(buffer + sizeof(int32_t), &buffersize, sizeof(int32_t));
		memcpy(buffer + sizeof(int32_t) * 2, databuffer, size); 
		Packet p(buffer, packetsize); 
		return p;
	}
}
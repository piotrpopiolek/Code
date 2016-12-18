#pragma once
#include "PacketType.h"
#include "Packet.h"
#include "FileTransferData.h"
#include <string>

namespace PS 
{
	class ChatMessage
	{
	public:
		ChatMessage(std::string);
		Packet toPacket(); 
	private:
		std::string message;
	};
	class FileDataBuffer 
	{
	public:
		Packet toPacket(); 
		char databuffer[FileTransferData::buffersize];
		int size; 
	};
}
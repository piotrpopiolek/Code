#pragma once
enum class PacketType
{
	ChatMessage,
	FileTransferRequestFile, //Wyslij zadanie o plik
	FileTransfer_EndOfFile, //Wyslij gdy plik jest wyslany 
	FileTransferByteBuffer, //Wyslij przed wysylaniem pliku 
	FileTransferRequestNextBuffer //Wyslij zadanie o kolejny bufor dla pliku
};
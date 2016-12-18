#pragma once
#include <fstream> 
struct FileTransferData
{
	static const int buffersize = 8192; //Rozmiar buffora
	std::string fileName; 
	int bytesWritten; 
	std::streampos fileOffset; 
	std::streampos fileSize; 
	std::streampos remainingBytes; 
	std::ifstream infileStream; 
	std::ofstream outfileStream; 
};
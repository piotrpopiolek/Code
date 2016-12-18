#pragma once
#include <fstream> 
struct FileTransferData
{
	static const int buffersize = 8192;
	std::string fileName; //Dla przychodzacych plikow
	int bytesWritten; //Dla przychodzacych plikow
	int fileOffset; //Dla czytania plikow
	int fileSize; //Dla czytania plikow
	int remainingBytes; //Dla czytania plikow
	std::ifstream infileStream; //Do czytania pliku ktory jest wysylany
	std::ofstream outfileStream; //Do czytania pliku ktory jest otrzymywany
	char buffer[buffersize]; //bufor do wysylania i otrzymywania plikow
};
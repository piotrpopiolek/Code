#pragma once
#include "PacketType.h"
class Packet
{
public:
	Packet();
	Packet(char * buffer, int size); 
	Packet(const Packet & p); 
	Packet(PacketType p); 
	int size;
	char * buffer;
};
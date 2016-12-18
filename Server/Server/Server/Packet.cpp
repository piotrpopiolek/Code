#include "Packet.h"
#include <Windows.h>
#include <stdint.h> // int32_t

Packet::Packet()
{

}

Packet::Packet(char * _buffer, int _size)
{
	buffer = _buffer;
	size = _size;
}

Packet::Packet(const Packet & p) 
{
	size = p.size;
	buffer = new char[size];
	memcpy(buffer, p.buffer, size);
}

Packet::Packet(PacketType p) 
{
	buffer = new char[sizeof(int32_t)]; 
	int32_t packettype = (int32_t)p; 
	packettype = htonl(packettype); 
	memcpy(buffer, &packettype, sizeof(int32_t)); 
	size = sizeof(int32_t); 
}

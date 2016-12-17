#pragma once
class PrimeFinder
{
	bool Pierwsza(unsigned int p);
public:
	bool flaga;
	PrimeFinder();
	PrimeFinder(unsigned int p);
	~PrimeFinder();
	unsigned int DajPierwsza(unsigned int p);
};


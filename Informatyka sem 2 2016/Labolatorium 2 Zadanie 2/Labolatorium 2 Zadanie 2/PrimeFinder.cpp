#include "PrimeFinder.h"
#include<iostream>
using namespace std;
bool PrimeFinder::Pierwsza(unsigned int p)
{
	int i = 2;
	while (i <= p)
	{
		if (!(p%i))
		{
			if (i != p)
				return false;
			else
				return true;
		}
		i++;
	}
}
PrimeFinder::PrimeFinder()
{

}
PrimeFinder::PrimeFinder(unsigned int p)
{
	if (Pierwsza(p))
	{
		cout << p << " jest liczba pierwsza\n";
		flaga = true;
	}
	else
	{
		cout << p << " nie jest liczba pierwsza\n";
		flaga = false;
	}
}
PrimeFinder::~PrimeFinder()
{

}
unsigned int PrimeFinder::DajPierwsza(unsigned int p)
{
	int i = 2;
	p++;
	while (i <= p)
	{
		if (!(p%i))
		{
			if (i != p)
				p++;
			else
				return p;
		}
		i++;
	}
}
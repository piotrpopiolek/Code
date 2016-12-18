#include "Port.h"
Port::Port(char * br,char * st, int b):bottles(b)
{
	int i = 0;
	brand = new char[strlen(br) + 1];
	while (i <= strlen(br))
	{
		brand[i] = br[i];
		i++;
	}
	i = 0;
	while (i <= strlen(st))
	{
		style[i] = st[i];
		i++;
	}
}
Port::Port(const Port & p)
{
	int i = 0;
	brand = new char[strlen(p.brand) + 1];
	while (i <= strlen(p.brand))
	{
		brand[i] = p.brand[i];
		i++;
	}
	i = 0;
	while (i <= strlen(p.style))
	{
		style[i] = p.style[i];
		i++;
	}
	bottles = p.bottles;
}
Port & Port::operator=(const Port & p)
{
	if (this == &p)
		return *this;
	delete[] brand;
	int i = 0;
	brand = new char[strlen(p.brand) + 1];
	while (i <= strlen(p.brand))
	{
		brand[i] = p.brand[i];
		i++;
	}
	i = 0;
	while (i <= strlen(p.style))
	{
		style[i] = p.style[i];
		i++;
	}
	bottles = p.bottles;
	return *this;
}
Port & Port::operator+=(int b)
{
	bottles = bottles + b;
	return *this;
}
Port & Port::operator-=(int b)
{
	bottles = bottles - b;
	return *this;
}
void Port::Show() const
{
	cout << "Brand: " << brand << endl; 
	cout << "Style: " << style << endl;
	cout << "Bottles: " << bottles << endl;
}
ostream & operator<<(ostream & os, const Port & p)
{
	os << p.brand << " " << p.style << " " << p.bottles;
	return os;
}
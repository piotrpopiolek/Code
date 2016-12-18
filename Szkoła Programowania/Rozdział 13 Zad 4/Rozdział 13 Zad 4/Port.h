#pragma once
#include<iostream>
using namespace std;
class Port
{
	char * brand;
	char style[20];
	int bottles;
public:
	Port(char * br="Brak",char * st="Brak",int b=0);
	Port(const Port & p);
	virtual ~Port()
	{
		delete[] brand;
	}
	Port & operator=(const Port & p);
	Port & operator+=(int b);
	Port & operator-=(int b);
	int BottleCount() const
	{
		return bottles;
	}
	virtual void Show() const;
	friend ostream & operator<<(ostream & os, const Port & p);
};


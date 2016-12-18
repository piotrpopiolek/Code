#pragma once
#include"Port.h"
class VintagePort:public Port
{
	char * nickname;
	int year;
public:
	VintagePort();
	VintagePort(char * br,char * st, int b,char * nm, int y);
	VintagePort(const VintagePort & vp);
	~VintagePort()
	{
		delete[] nickname;
	}
	VintagePort & operator=(const VintagePort & vp);
	void Show() const;
	friend ostream & operator<<(ostream & os, const VintagePort & vp);
};


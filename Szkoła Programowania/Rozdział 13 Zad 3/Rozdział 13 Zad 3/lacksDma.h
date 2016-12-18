#pragma once
#include"base.h"
class lacksDma:public base
{
	char * color;
public:
	lacksDma(char * s="<tytul>",char * c="<kolor>",int r=0);
	lacksDma(const lacksDma & ob);
	lacksDma & operator=(const lacksDma & ob);
	~lacksDma();
	void View();
};


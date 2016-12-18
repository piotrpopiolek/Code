#pragma once
#include"base.h"
class hasDma:public base
{
	char * style;
public:
	hasDma(const char * s = "brak",char * sty="brak", int r = 0);
	hasDma(const hasDma & ob);
	hasDma & hasDma::operator=(const hasDma & ob);
	~hasDma();
	void View();
};


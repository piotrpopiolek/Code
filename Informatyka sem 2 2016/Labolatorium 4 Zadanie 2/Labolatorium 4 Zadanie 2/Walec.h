#pragma once
#include"Kolo.h"
extern const double PI;
class Walec :public Kolo
{
protected:
	double wysokosc;
public:
	Walec();
	Walec(double, double);
	~Walec();
	double Pole();
	double Objetosc();
};


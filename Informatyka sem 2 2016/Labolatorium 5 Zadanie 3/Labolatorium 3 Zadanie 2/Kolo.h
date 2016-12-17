#pragma once
#include"Figura.h"
const double PI = 3.1416;
class Kolo:public Figura
{
protected:
	double r;
	double srodek_x;
	double srodek_y;
public:
	Kolo(double r);
	bool Czy_Zawiera(double x, double y);
	virtual ~Kolo();
	double Pole();
	double Obwod();
};

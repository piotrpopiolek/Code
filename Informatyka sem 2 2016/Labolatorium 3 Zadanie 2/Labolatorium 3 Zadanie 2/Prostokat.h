#pragma once
#include "Figura.h"
class Prostokat : public Figura
{
	double wysokosc, szerokosc;
public:
	Prostokat(double wys, double szer,string name="Prostokat");
	virtual ~Prostokat();
	virtual double Pole();
	virtual double Obwod();
};

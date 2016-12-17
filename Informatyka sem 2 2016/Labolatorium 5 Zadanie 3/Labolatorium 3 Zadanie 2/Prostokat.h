#pragma once
#include "Figura.h"
class Prostokat : public Figura
{
protected:
	double wysokosc, szerokosc;
public:
	Prostokat(double wys, double szer,string name="Prostokat");
	bool Czy_Zawiera(double x, double y);
	virtual ~Prostokat();
	virtual double Pole();
	virtual double Obwod();
};

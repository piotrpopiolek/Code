#pragma once
#include <math.h>
#include "Figura.h"
class Trojkat : public Figura
{
	double a, b, c;
public:
	Trojkat(double a, double b , double c,string name="Trojkat");
	bool Czy_Zawiera(double x, double y);
	virtual ~Trojkat();
	double Pole();
	double Obwod();
};

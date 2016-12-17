#pragma once
#include <math.h>
#include "Figura.h"
class Trojkat : public Figura
{
	double a, b, c;
public:
	Trojkat(double a, double b , double c,string name="Trojkat");
	virtual ~Trojkat();
	double Pole();
	double Obwod();
};

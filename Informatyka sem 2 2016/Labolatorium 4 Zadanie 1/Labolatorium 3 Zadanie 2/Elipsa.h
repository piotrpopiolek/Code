#pragma once
#include "Figura.h"
#include"Kolo.h"
#include<cmath>
class Elipsa : public Figura
{
	double a, b;
public:
	Elipsa(double a, double b,string name="Elipsa");
	bool Czy_Zawiera(double x, double y);
	virtual ~Elipsa();
	double Pole();
	double Obwod();
};


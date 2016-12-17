#pragma once
#include "Figura.h"
#include<cmath>
const double PI = 3.1416;
class Elipsa : public Figura
{
	double a, b;
public:
	Elipsa(double a, double b,string name="Elipsa");
	virtual ~Elipsa();
	double Pole();
	double Obwod();
};


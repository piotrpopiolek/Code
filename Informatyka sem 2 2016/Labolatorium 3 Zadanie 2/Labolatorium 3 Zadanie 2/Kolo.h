#pragma once
#include "Figura.h"
#include "Elipsa.h"
class Kolo : public Figura
{
	double r;
public:
	Kolo(double r,string name="Kolo");
	virtual ~Kolo();
	double Pole();
	double Obwod();
};

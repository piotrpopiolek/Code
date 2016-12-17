#pragma once
#include"Funkcja.h"
class FunkcjaKwadratowa:public Funkcja
{
	double a, b, c;
public:
	FunkcjaKwadratowa(double a=1.0,double b=1.0,double c=1.0,double x=1.0);
	~FunkcjaKwadratowa();
	virtual double ObliczWartosc();
	virtual double ObliczWartosc(double);
};


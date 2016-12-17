#pragma once
#include"Funkcja.h"
class FunkcjaLiniowa:public Funkcja
{
	double a;
	double b;
public:
	FunkcjaLiniowa(double a,double b,double x);
	~FunkcjaLiniowa();
	double oblicz();
	friend double bisekcja(Funkcja * obiekt, double p, double k, double d);
};


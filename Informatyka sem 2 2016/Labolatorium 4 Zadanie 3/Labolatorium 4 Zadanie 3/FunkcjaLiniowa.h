#pragma once
#include"Funkcja.h"
class FunkcjaLiniowa:public Funkcja
{
	double a;
	double b;
public:
	FunkcjaLiniowa(double a=1,double b=0,double x=1);
	~FunkcjaLiniowa();
	double ObliczWartosc();
	double ObliczWartosc(double z=0.0);
};


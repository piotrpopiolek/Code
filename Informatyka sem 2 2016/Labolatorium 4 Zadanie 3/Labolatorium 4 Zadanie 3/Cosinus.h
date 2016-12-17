#pragma once
#include"Funkcja.h"
extern const double PI;
class Cosinus:public Funkcja
{
public:
	Cosinus(double x=0.0);
	~Cosinus();
	double ObliczWartosc();
	double ObliczWartosc(double x = 0);
};


#include "FunkcjaKwadratowa.h"



FunkcjaKwadratowa::FunkcjaKwadratowa(double a, double b, double c,  double x ):Funkcja(x)
{
	this->a = a;
	this->b = b;
	this->c = c;
}


FunkcjaKwadratowa::~FunkcjaKwadratowa()
{
}
double FunkcjaKwadratowa::ObliczWartosc()
{
	return (a*ValueX()*ValueX() + b*ValueX() + c);
}
double FunkcjaKwadratowa::ObliczWartosc(double x)
{
	double save = ValueX();
	GetX() = x;
	double wynik = a*ValueX()*ValueX() + b*ValueX() + c;
	GetX() = save;
	return wynik;
}
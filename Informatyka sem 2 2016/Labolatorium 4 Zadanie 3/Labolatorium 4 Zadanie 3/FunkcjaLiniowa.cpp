#include "FunkcjaLiniowa.h"
FunkcjaLiniowa::FunkcjaLiniowa(double a,double b,double x):Funkcja(x)
{
	this->a = a;
	this->b = b;
}
FunkcjaLiniowa::~FunkcjaLiniowa()
{

}
double FunkcjaLiniowa::ObliczWartosc()
{
	return (a*ValueX() + b);
}
double FunkcjaLiniowa::ObliczWartosc(double z)
{
	double save = ValueX();
	GetX() = z;
	double wynik = a*ValueX() + b;
	GetX() = save;
	return wynik;
}
#include "MiejscaZerowe.h"
MiejscaZerowe::MiejscaZerowe(Funkcja * f,double a,double b)
{
	funkcja = f;
	this->a = a;
	this->b = b;
}
MiejscaZerowe::~MiejscaZerowe()
{

}
void MiejscaZerowe::UstawPrzedzial(double a, double b)
{
	this->a = a;
	this->b = b;
}
double MiejscaZerowe::Oblicz(double p, double k, double d)
{
	double x1;
	double temp;
	while (abs(p - k)>d)
	{
		x1 = (p + k) / 2;
		funkcja->GetX()=x1;
		if (funkcja->ObliczWartosc() == 0)
			return funkcja->ValueX();
		temp = funkcja->ObliczWartosc();
		funkcja->GetX()=p;
		if (funkcja->ObliczWartosc()*temp < 0)
			k = x1;
		else
			p = x1;
	}
	return funkcja->ValueX();
}

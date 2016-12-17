#include "Pochodna.h"
Pochodna::Pochodna(Funkcja * f,double x)
{
	funkcja = f;
	this->x = x;
}
Pochodna::~Pochodna()
{

}
void Pochodna::UstawX(double x)
{
	this->x = x;
}
double Pochodna::Oblicz(double z)
{
	if (typeid(Sinus) == typeid(*funkcja))
	{
		Cosinus temp;
		return temp.ObliczWartosc(z);
	}
	if (typeid(Cosinus) == typeid(*funkcja))
	{
		Sinus temp;
		return -temp.ObliczWartosc(z);
	}
	return ((funkcja->ObliczWartosc(z + epsilon) - funkcja->ObliczWartosc(z))/ epsilon);
}
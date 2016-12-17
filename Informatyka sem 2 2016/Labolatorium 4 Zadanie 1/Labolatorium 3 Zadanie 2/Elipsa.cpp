#include "Elipsa.h"
Elipsa::Elipsa(double a, double b,string name):Figura(name)
{
	this->a = a;
	this->b = b;
}
Elipsa::~Elipsa()
{

}
bool Elipsa::Czy_Zawiera(double x, double y)
{
	cout << "Dla Elipsy funkcja nie jest zaimplementowana" << endl;
	cout << "Domyslnie zwraca false" << endl;
	return false;
}
double Elipsa::Pole()
{
	return (PI*a*b);
}
double Elipsa::Obwod()
{
	return (PI*(1.5*(a + b) - sqrt(a*b)));
}
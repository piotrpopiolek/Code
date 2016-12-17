#include "Elipsa.h"
Elipsa::Elipsa(double a, double b,string name):Figura(name)
{
	this->a = a;
	this->b = b;
}
Elipsa::~Elipsa()
{

}
double Elipsa::Pole()
{
	return (PI*a*b);
}
double Elipsa::Obwod()
{
	return (PI*(1.5*(a + b) - sqrt(a*b)));
}
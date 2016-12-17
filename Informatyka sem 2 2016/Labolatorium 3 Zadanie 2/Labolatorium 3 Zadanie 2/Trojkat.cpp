#include "Trojkat.h"
Trojkat::Trojkat(double a, double b, double c,string name):Figura(name)
{
	this->a = a;
	this->b = b;
	this->c = c;
}
Trojkat::~Trojkat()
{

}
double Trojkat::Pole()
{
	double p = this->Obwod() / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}
double Trojkat::Obwod()
{
	return (a + b + c);
}
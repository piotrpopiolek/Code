#include "Kolo.h"
Kolo::Kolo(double r,string name):Figura(name)
{
	this->r = r;
}
Kolo::~Kolo()
{

}
double Kolo::Pole()
{
	return (PI*r*r);
}
double Kolo::Obwod()
{
	return (2*PI*r);
}

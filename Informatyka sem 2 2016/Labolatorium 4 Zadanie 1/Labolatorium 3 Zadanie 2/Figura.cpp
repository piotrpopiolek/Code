#include "Figura.h"
Figura::Figura()
{

}
Figura::Figura(string name,double x,double y)
{
	this->name = name;
	this->x = x;
	this->y = y;
}
Figura::~Figura()
{

}
string Figura::GetName()
{
	return name;
}
double Figura::GetX()
{
	return x;
}
double Figura::GetY()
{
	return y;
}
double Figura::Pole()
{
	return 0.0;
}
double Figura::Obwod()
{
	return 0.0;
}

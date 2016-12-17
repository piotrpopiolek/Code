#include "Kolo.h"
Kolo::Kolo()
{

}
Kolo::Kolo(double r)
{
	this->r = r;
	srodek_x = 0;
	srodek_y = 0;
}
Kolo::~Kolo()
{

}
bool Kolo::Czy_Zawiera(double x, double y)
{
	double tempY = y - srodek_y;
	double tempX = x - srodek_y;
	double d = tempX*tempX + tempY*tempY;
	if ((r*r) > d)
		return true;
	else
		return false;
}
double Kolo::Pole()
{
	return (PI*r*r);
}
double Kolo::Obwod()
{
	return (2 * PI*r);
}

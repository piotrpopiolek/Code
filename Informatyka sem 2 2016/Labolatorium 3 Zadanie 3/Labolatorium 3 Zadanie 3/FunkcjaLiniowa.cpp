#include "FunkcjaLiniowa.h"
FunkcjaLiniowa::FunkcjaLiniowa(double a,double b,double x)
{
	this->a = a;
	this->b = b;
	SetX(x);
}
FunkcjaLiniowa::~FunkcjaLiniowa()
{

}
double FunkcjaLiniowa::oblicz()
{
	return (a*GetX() + b);
}
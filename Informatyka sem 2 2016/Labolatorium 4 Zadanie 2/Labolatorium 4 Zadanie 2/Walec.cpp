#include "Walec.h"
Walec::Walec()
{

}
Walec::Walec(double a, double b) :wysokosc(a), Kolo(b)
{

}
Walec::~Walec()
{

}
double Walec::Pole()
{
	return (2 * Kolo::Pole() + 2 * PI * r * wysokosc);
}
double Walec::Objetosc()
{
	return (Kolo::Pole()*wysokosc);
}
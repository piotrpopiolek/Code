#include "Funkcja.h"
Funkcja::Funkcja(double x)
{
	this->x = x;
}
Funkcja::~Funkcja()
{
	//std::cout << "Destruktor funkcji\n";
}
double & Funkcja::GetX()
{
	return x;
}
double Funkcja::ValueX() const
{
	return x;
}
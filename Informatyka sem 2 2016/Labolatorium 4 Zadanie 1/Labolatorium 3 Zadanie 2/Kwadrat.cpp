#include "Kwadrat.h"
Kwadrat::Kwadrat(double a,string name) : Prostokat(a, a, name)
{

}
bool Kwadrat::Czy_Zawiera(double x, double y)
{
	if (x > GetX() && x < GetX() + szerokosc && y > GetY() && y < GetY() + szerokosc)
		return true;
	else
		return false;
}
Kwadrat::~Kwadrat()
{

}

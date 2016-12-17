#include "Prostokat.h"
Prostokat::Prostokat(double wys, double szer,string name):wysokosc(wys),szerokosc(szer),Figura(name)
{

}
Prostokat::~Prostokat()
{

}
bool Prostokat::Czy_Zawiera(double x, double y)
{
	if (x > GetX() && x<GetX() + szerokosc && y>GetY() && y < GetY() + wysokosc)
		return true;
	else
	return false;
}
double Prostokat::Pole()
{
	return szerokosc*wysokosc;
}
double Prostokat::Obwod()
{
	return (2 * wysokosc + 2 * szerokosc);
}

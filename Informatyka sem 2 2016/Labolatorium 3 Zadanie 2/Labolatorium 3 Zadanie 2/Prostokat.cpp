#include "Prostokat.h"
Prostokat::Prostokat(double wys, double szer,string name):wysokosc(wys),szerokosc(szer),Figura(name)
{

}
Prostokat::~Prostokat()
{

}
double Prostokat::Pole()
{
	return szerokosc*wysokosc;
}
double Prostokat::Obwod()
{
	return (2 * wysokosc + 2 * szerokosc);
}

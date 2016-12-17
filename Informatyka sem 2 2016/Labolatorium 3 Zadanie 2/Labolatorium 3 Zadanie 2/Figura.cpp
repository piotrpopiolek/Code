#include "Figura.h"
Figura::Figura()
{

}
Figura::Figura(string name)
{
	this->name = name;
}
Figura::~Figura()
{

}
string Figura::GetName()
{
	return name;
}
double Figura::Pole()
{
	return 0.0;
}
double Figura::Obwod()
{
	return 0.0;
}

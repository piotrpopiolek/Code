#pragma once
#include"Ko³a.h"
#include"Silnik.h"
struct Samochod
{
	Kola kola;
	Silnik silnik;
	Samochod();
	Samochod(double srednica, double szerokosc, std::string ogumienie, double pojemnosc, std::string typ_paliwa);
};
std::ostream& operator<<(std::ostream& stream, const Samochod& K);
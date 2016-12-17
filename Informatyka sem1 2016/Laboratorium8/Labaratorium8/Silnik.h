#pragma once
#include<iostream>
#include<string>
struct Silnik
{
	double pojemnosc;
	std::string typ_paliwa;
	Silnik();
	Silnik(double poj, std::string typ_p);
};
std::ostream& operator<<(std::ostream& stream, const Silnik& K);
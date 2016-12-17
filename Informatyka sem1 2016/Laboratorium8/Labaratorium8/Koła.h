#pragma once
#include<iostream>
#include<string>
struct Kola
{
	double srednica;
	double szerokosc;
	std::string ogumienie;
	Kola();
	Kola(double sre, double sze, std::string ogu);
};
std::ostream& operator<<(std::ostream& stream, const Kola& K);
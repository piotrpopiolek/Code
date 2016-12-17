#pragma once
#include<iostream>
class Funkcja
{
	double x;
public:
	Funkcja(double x=1.0);
	~Funkcja();
	double & GetX();
	double ValueX() const;
	virtual double ObliczWartosc() = 0;
	virtual double ObliczWartosc(double) = 0;
};


#pragma once
#include"Funkcja.h"
class AlgorytmNumeryczny
{
protected:
	Funkcja * funkcja;
	double epsilon;
public:
	AlgorytmNumeryczny(Funkcja * f=nullptr, double e = 0.00001);
	~AlgorytmNumeryczny();
	void UstawEpsilon(double);
	virtual double Oblicz(double) 
	{
		return -1;
	}
};


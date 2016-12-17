#pragma once
#include"Funkcja.h"
#include"AlgorytmNumeryczny.h"
#include<cmath>
#include<iostream>
class MiejscaZerowe :public AlgorytmNumeryczny
{
protected:
	double a;
	double b;
public:
	MiejscaZerowe(Funkcja * f, double a = -1.0, double b = 1.0);
	~MiejscaZerowe();
	void UstawPrzedzial(double a = -1.0, double b = 1.0);
	double Oblicz(double p, double k, double d = 0.00000000000000001);
};


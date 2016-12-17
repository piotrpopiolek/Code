#pragma once
#include"Funkcja.h"
#include<cmath>
#include<iostream>
const double PI = 3.14159265358979323846;
class Sinus:public Funkcja
{
public:
	Sinus(double x=1.0);
	~Sinus();
	double ObliczWartosc();
	double ObliczWartosc(double x = 0);
};


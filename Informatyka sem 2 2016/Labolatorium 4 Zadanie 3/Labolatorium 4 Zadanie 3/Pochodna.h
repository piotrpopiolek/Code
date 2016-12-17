#pragma once
#include<iostream>
#include"Funkcja.h"
#include"Sinus.h"
#include"Cosinus.h"
#include"AlgorytmNumeryczny.h"
using std::cout;
using std::endl;
class Pochodna:public AlgorytmNumeryczny
{
protected:
	double x;
public:
	Pochodna(Funkcja * f=nullptr,double x=0.0);
	~Pochodna();
	void UstawX(double);
	double Oblicz(double z=1.0);
};


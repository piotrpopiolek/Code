#pragma once
#include<string>
#include<iostream>
using namespace std;
class Figura
{
	string name;
	double x;
	double y;
public:
	Figura();
	Figura(string, double x = 0.0, double y = 0.0);
	string GetName();
	double GetX();
	double GetY();
	virtual ~Figura();
	virtual double Pole();
	virtual double Obwod();
	virtual bool Czy_Zawiera(double x,double y) = 0;
};


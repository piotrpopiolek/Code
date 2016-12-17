#pragma once
#include<string>
#include<iostream>
using namespace std;
class Figura
{
	string name;
public:
	Figura();
	Figura(string);
	string GetName();
	virtual ~Figura();
	virtual double Pole();
	virtual double Obwod();
};


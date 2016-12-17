#pragma once
#include<iostream>
#include"no_real_solution.h"
using namespace std;
class Binomial
{
	double a;
	double b;
	double c;
	double delta;
	double x1;
	double x2;
	double value;
public:
	Binomial();
	Binomial(double a, double b, double c);
	void Solve();
	double getA();
	double getB();
	double getC();
	double getX1();
	double getX2();
	Binomial operator+(const Binomial& wielomian);
	Binomial operator-(const Binomial& wielomian);
	double calculate(double x);
	~Binomial();
};


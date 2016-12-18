#include<iostream>
#include"stacktp.h"
template<template<typename T> class Thing>
class Crab
{
	Thing<int> s1;
	Thing<double> s2;
public:
	Crab() {};
	bool push(int a, double x)
	{
		return s1.push(a) && s2.push(x);
	}
	bool pop(int & a, double & x)
	{
		return s1.pop(a) && s2.pop(x);
	}
};
int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	Crab<Stack> nebula;
	int ni;
	double nb;
	cout << "Podaj pary int double w postaci 4 3.5 (0 0 konczy wpisywanie):\n";
	while (cin >> ni >> nb && ni > 0 && nb > 0)
	{
		if (!nebula.push(ni, nb))
			break;
	}
	while (nebula.pop(ni, nb))
		cout << ni << ", " << nb << endl;
	system("pause");
	return 0;
}
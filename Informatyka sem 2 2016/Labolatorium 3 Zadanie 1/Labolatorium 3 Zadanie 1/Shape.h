#pragma once
#include<string>
#include<iostream>
using namespace std;
class Shape
{
	string name;
public:
	Shape();
	Shape(string n);
	~Shape();
	virtual double Area();
};
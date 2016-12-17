#pragma once
#include<iostream>
#include"Shape.h"
using namespace std;
class Rectangle:public Shape
{
	double height;
	double width;
public:
	Rectangle();
	Rectangle(string n, double w, double h);
	double SetWidth();
	double SetHeight();
	~Rectangle();
	double Area();
};


#pragma once
#include"Rectangle.h"
#include "Square.h"
#include<string>
#include<iostream>
using namespace std;
class Square:public Rectangle
{
public:
	Square();
	Square(string n, double x);
	~Square();
	double Area();
};
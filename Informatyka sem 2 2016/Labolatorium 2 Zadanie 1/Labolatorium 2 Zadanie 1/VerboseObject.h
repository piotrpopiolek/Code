#pragma once
#include<string>
#include<iostream>
using namespace std;
class VerboseObject
{
	string name;
public:
	VerboseObject();
	VerboseObject(string n);
	~VerboseObject();
	void Metod();
};


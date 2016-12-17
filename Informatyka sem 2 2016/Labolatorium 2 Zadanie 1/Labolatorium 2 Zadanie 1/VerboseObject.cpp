#include "VerboseObject.h"
#include<iostream>
#include<string>
using namespace std;
VerboseObject::VerboseObject()
{
	cout << "Konstruktor domyslny\n";
}
VerboseObject::VerboseObject(string n) :name(n)
{
	cout << "Konstruktor obiektu " << name << "\n";
}
VerboseObject::~VerboseObject()
{
	cout << "Destruktor obiektu " << name << "\n";
}
void VerboseObject::Metod()
{
	cout << "Metoda obiektu " << name << "\n";
}

#pragma once
#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::endl;
class Person
{
	string imie;
	string nazwisko;
public:
	Person(string i="<imie>",string n="<nazwisko>");
	~Person();
	virtual void Show();
};


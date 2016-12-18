#pragma once
#include"Person.h"
class Gunslinger:virtual public Person
{
	int liczba_naciec;
	double czas_reakcji;
public:
	Gunslinger(string i = "<imie>", string n = "<nazwisko>");
	~Gunslinger();
	double Draw();
	void Show();
	int & SetLiczba();
	double & SetCzas();
};


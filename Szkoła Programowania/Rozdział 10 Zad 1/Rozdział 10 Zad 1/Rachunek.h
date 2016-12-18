#pragma once
#include<string>
#include<iostream>
using namespace std;
class Rachunek
{
	string nazwisko;
	string numer;
	double saldo;
	int licznik;
public:
	void dodaj();
	void pokaz();
	bool depozyt(double kwota);
	bool wyplata(double kwota);
	Rachunek();
	Rachunek(string _nazwisko, string _numer, double _saldo);
	~Rachunek();
};
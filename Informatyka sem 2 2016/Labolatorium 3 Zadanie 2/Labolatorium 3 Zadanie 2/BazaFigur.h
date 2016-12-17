#pragma once
#include <iostream>
#include "Figura.h"
#include "Elipsa.h"
#include "Kolo.h"
#include "Prostokat.h"
#include "Kwadrat.h"
#include "Trojkat.h"
#include<iostream>
using namespace std;
const int rozmiar = 100;
class BazaFigur
{
	Figura* Tablica[rozmiar];
	int index;
public:
	BazaFigur();
	virtual ~BazaFigur();
	void DodajElipse(double, double);
	void DodajKolo(double);
	void DodajProstokat(double, double);
	void DodajKwadrat(double);
	void DodajTrojkat(double, double, double);
	void Pokaz();
};
#pragma once
class Funkcja
{
	double x;
public:
	Funkcja();
	~Funkcja();
	void SetX(double x);
	double GetX();
	virtual double oblicz() = 0;
	friend double bisekcja(Funkcja * obiekt, double p, double k, double d);
};


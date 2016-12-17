#pragma once
#include "Prostokat.h"
class Kwadrat : public Prostokat
{
public:
	Kwadrat(double a,string name="Kwadrat");
	bool Czy_Zawiera(double x,double y);
	virtual ~Kwadrat();
};


#include "Mul.h"



Mul::Mul()
{
	value = 1;
}


Mul::~Mul()
{
}
void Mul::operator()(int x)
{
	value *= x;
}

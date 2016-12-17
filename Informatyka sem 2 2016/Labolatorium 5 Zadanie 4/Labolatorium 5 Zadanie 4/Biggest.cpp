#include "Biggest.h"
Biggest::Biggest()
{
	value = 0;
}
Biggest::~Biggest()
{

}
void Biggest::operator()(int x)
{
	bool first = true;
	if (first)
	{
		value = x;
		first = !first;
	}
	if (value < x)
		value = x;
}
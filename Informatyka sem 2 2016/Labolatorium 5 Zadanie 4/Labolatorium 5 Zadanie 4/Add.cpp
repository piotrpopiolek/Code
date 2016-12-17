#include "Add.h"
Add::Add()
{
	value = 0;
}
Add::~Add()
{
}
bool Add::operator()(int x)
{
	if (value += x)
		return true;
	else
		return false;
}
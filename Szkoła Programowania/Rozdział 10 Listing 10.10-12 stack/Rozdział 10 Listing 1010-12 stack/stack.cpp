#include "stack.h"
stack::stack()
{
	top = 0;
}
stack::~stack()
{

}
bool stack::isempty() const
{
	return top == 0;
}
bool stack::isfull() const
{
	return top == MAX;
}
//push() zwraca false, jesli stos jest juz pelen
bool stack::push(const Item & item)
{
	if (top < MAX)
	{
		items[top++] = item;
		return true;
	}
	else
		return false;
}
bool stack::pop(Item & item)
{
	if (top > 0)
	{
		item = items[--top];
		return true;
	}
	else
		return false;
}
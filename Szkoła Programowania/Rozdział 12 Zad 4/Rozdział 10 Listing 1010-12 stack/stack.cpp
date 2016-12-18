#include "stack.h"
stack::stack(int n):MAX(n)
{
	top = 0;
	items = new Item[MAX];
}
stack::~stack()
{
	delete[] items;
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
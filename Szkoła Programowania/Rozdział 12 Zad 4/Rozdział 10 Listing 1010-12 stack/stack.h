#pragma once
#ifndef STACK_H_
#define STACK_H_
typedef unsigned long Item;
class stack
{
	Item * items;
	int MAX;
	int top;
public:
	stack(int n=10);
	~stack();
	bool isempty() const;
	bool isfull() const;
	//push() zwraca false, jesli stos jest juz pelen
	bool push(const Item & item);
	bool pop(Item & item);
};
#endif // !STACK_H_



#include<iostream>
#ifndef STACK_H_
#define STACK_H_
using namespace std;
typedef struct Customer
{
	string name;
	double payment;
} Item ;
using namespace std;
class Stack
{
	enum { MAX = 3 };
	Item items[MAX];
	int top;
public:
	Stack();
	bool isempty()const;
	bool isfull() const;
	bool push(const Item & item);
	bool pop(Item &item);
};
#endif // STACK_h_
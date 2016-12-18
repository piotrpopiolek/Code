#include"Move.h"
#include<iostream>
using namespace std;
int main()
{
	Move A;
	A.showmove();
	Move B(1, 1);
	Move C(2, 4);
	B.add(C);
	B.showmove();
	B.reset();
	B.showmove();
	system("pause");
	return 0;
}
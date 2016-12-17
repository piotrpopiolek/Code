#include<iostream>
#include"Add.h"
#include"Biggest.h"
#include"Mul.h"
using namespace std;
int main()
{
	Add add;
	Mul mul;
	Biggest biggest;
	for (int i = 1; i < 10; i++)
	{
		add(i);
		mul(i);
		biggest(i);
	}
	cout << add.value << endl;
	cout << mul.value << endl;
	cout << biggest.value << endl;
	system("pause");
	return 0;
}
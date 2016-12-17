#include<iostream>
#include"Binomial.h"
using namespace std;
int main()
{
	Binomial w1(6, 2, -12);
	Binomial w2(3, -3, 3);
	w1.Solve();
	w2.Solve();
	Binomial w3 = w1 + w2;
	w3.Solve();
	double val = 4;
	cout << "Wartosc wielomianu dla x = " << val << "\n" << w3.calculate(4) << endl;
	cin.ignore();
	return 0;
}
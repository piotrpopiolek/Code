#include<iostream>
#include"Binomial.h"
using namespace std;
int main()
{
	try
	{
		Binomial w1(1, 5, 3);
		Binomial w2(1, 2, 1);
		Binomial w3(6, 3, 9);
		w1.Solve();
		w2.Solve();
		w3.Solve();
		double val = 4;
		cout << "Wartosc wielomianu dla x = " << val << "\n" << w3.calculate(4) << endl;
	}
	catch (no_real_solution & e)
	{
		cerr << e.what() << endl;
	}
	system("pause");
	return 0;
}
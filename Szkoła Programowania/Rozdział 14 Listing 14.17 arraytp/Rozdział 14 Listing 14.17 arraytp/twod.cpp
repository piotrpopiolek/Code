#pragma once
#include<iostream>
#include"arraytp.h"
#include<cstdlib>
#include<ctime>
int main()
{
	srand(time(NULL));
	using std::cin;
	using std::cout;
	using std::endl;
	const int rozmiar = 25;
	const int rozmiar2 = 12;
	ArrayTP<int, rozmiar> sums;
	ArrayTP<double, rozmiar> aves;
	ArrayTP < ArrayTP<int, rozmiar2>, rozmiar> twodee;
	int i, j;
	for (i = 0; i < rozmiar; i++)
	{
		sums[i] = 0;
		for (j = 0; j < rozmiar2; j++)
		{
			twodee[i][j] = rand() % 100;
			sums[i] += twodee[i][j];
		}
		aves[i] = (double)sums[i] / rozmiar2;
	}
	for (i = 0; i < rozmiar; i++)
	{
		for (j = 0; j < rozmiar2; j++)
		{
			cout.width(2);
			cout << twodee[i][j] << " ";
		}
		cout << ": sum = ";
		cout.width(3);
		cout << sums[i] << ", srednia = " << aves[i] << endl;
	}
	cout << "Koniec\n";
system("pause");
return 0;
}

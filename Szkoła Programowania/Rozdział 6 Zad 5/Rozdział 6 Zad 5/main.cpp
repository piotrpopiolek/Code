#include<iostream>
using namespace std;
double podatek(double p);
int main()
{
	bool w = true;
	while(w)
	{
		cout << "Podaj kwote do policzenia podatku: ";
		double war; 
		if (!(cin >> war) || (war<0))
		{
			w = false;
			break;
		}
		cout << "Podatek wynosi: " << podatek(war) << endl;
	};
	system("pause");
	return 0;
}
double podatek(double p)
{
	double temp;
	double oplata = 0;;
	if (p > 35000)
	{
		temp = p - 35000;
		oplata = 0.2*temp;
		p = 35000;
	}
	if (p > 15000)
	{
		temp = p - 15000;
		oplata += 0.15*temp;
		p = 10000;
	}
	if (p > 5000)
	{
		temp = p;
		oplata += 0.10*temp;
	}
	return oplata;
}
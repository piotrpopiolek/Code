#include<iostream>
using namespace std;
int main()
{
	const double cm_na_cal = 2.54;
	const int cal_na_stope = 12;
	int cal;
	int stopa;
	int r_cal;
	int cm;
	cout << "Podaj wzrost w centymatrach: ";
	cin >> cm;
	cal = cm / cm_na_cal;
	stopa = cal / cal_na_stope;
	r_cal = cal % cal_na_stope;
	cout << endl << "W jakiej formie chcesz otrzymac wynik?" << endl;
	cout << "1. Cale 2. Cale i stopy" << endl;
	int forma;
	cin >> forma;
	if (forma == 1)
	{
		cout << "Wynik to " << cal << " cale" << endl;
	}
	else
	{
		cout << "Wynik to " << stopa << " stop i " << r_cal << " cale" << endl;
	}
	system("pause");
	return 0;
}
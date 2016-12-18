#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	const int start = 100;
	double cleo=start;
	double dafne=start;
	const double procent_dafne = 0.10;
	const double procent_cleo = 0.05;
	double zysk_dafne;
	double zysk_cleo;
	double  roznica;
	int rok = 1;
	cout << "Rok       Cleo    Dafne     Roznica" << endl;
	do
	{
		zysk_dafne = procent_dafne*start;
		zysk_cleo = procent_cleo*cleo;
		dafne += zysk_dafne;
		cleo += zysk_cleo;
		roznica = dafne - cleo;
		cout << setw(3) << rok << setw(12) << cleo << setw(8) << dafne << setw(10) << roznica << endl;
		rok++;
	} while (cleo < dafne);

	system("pause");
	return 0;
}
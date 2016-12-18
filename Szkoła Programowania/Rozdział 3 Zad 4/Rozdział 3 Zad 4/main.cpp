#include<iostream>
using namespace std;
int main()
{
	const int sekundy = 60;
	const int minuty = 60;
	const int godziny = 24;
	unsigned long long czas, czas_kopia;
	cout << "Podaj liczbe sekund: ";
	cin >> czas;
	czas_kopia = czas;
	int ilosc_dni = czas_kopia / (godziny*minuty*sekundy);
	czas_kopia=czas_kopia % (godziny*minuty*sekundy);
	int ilosc_godzin = czas_kopia / (minuty*sekundy);
	czas_kopia = czas_kopia % (minuty*sekundy);
	int ilosc_minut = czas_kopia / sekundy;
	czas_kopia = czas_kopia % sekundy;
	cout << czas << " sekund = " << ilosc_dni <<" dni "<<ilosc_godzin<<" godzin "<<ilosc_minut<<" minut "<<czas_kopia<<" sekund " <<endl;
	system("pause");
	return 0;
}
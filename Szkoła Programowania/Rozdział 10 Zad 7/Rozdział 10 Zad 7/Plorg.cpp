#include "Plorg.h"
Plorg::Plorg(const char* name, int syt)
{
	int i = 0;
	int j = strlen(name);
	while (i <= j)
	{
		fullname[i] = name[i];
		i++;
	}
	sytosc = syt;
}
void Plorg::show()
{
	cout << fullname << endl;
	cout << sytosc << endl;
}
void Plorg::zmien()
{
	cout << "Podaj nowy wspolczynnik sytosci: " << endl;
	cin >> sytosc;
}
void Plorg::zmien(int a)
{
	sytosc = a;
}

#include<iostream>
long double probability(unsigned numbers, unsigned picks);
int main()
{
	using namespace std;
	int total, choices, szczesliwy;
	cout << "Podaj najwieksza liczbe, jaka mozna wybrac, oraz\n" << "liczbe skreslen:\n";
	cout << "Oraz zakres losowania szczesliwego numerku:\n";
	while ((cin >> total >> choices >> szczesliwy) && choices <= total)
	{
		cout << "Szansa wygranej to jeden do ";
		cout << probability(total, choices)*probability(szczesliwy,1) << "\n";
		cout << "Nastepne dwie liczby (q, aby zakonczyc): ";
	}
	cout << "do widzenia\n";
	system("pause");
	return 0;
}
long double probability(unsigned numbers, unsigned picks)
{
	long double result = 1.0;
	long double n;
	unsigned p;
	for (n = numbers, p = picks; p > 0; n--, p--)
		result = result * n / p;
	return result;
}
#include<iostream>
#include<cstdlib>
using namespace std;
class Sales
{
	double *sales;
	int rozmiar;
	double average;
	double minimum;
	double maksimum;

public:
	Sales()
	{
		cout << "Bez paremetru" << endl;
		cout << "Podaj rozmiar tablicy: " << endl;
		cin >> rozmiar;
		sales = new double[rozmiar];
		average = 0;
		minimum = 0;
		maksimum = 0;
	}
	Sales(int r)
	{
		cout << "Z parametrem" << endl;
		average = 0;
		minimum = 0;
		maksimum = 0;
		double sum = 0;
		rozmiar = r;
		sales = new double[rozmiar];
		for (int i = 0; i<rozmiar; i++)
		{
			sales[i] = rand() % 100;
			if (i == 0)
				minimum = maksimum = sales[i];
			sum += sales[i];
			if (minimum > sales[i])
				minimum = sales[i];
			else if (maksimum < sales[i])
				maksimum = sales[i];

		}
		average = sum / rozmiar;
	}

	~Sales()
	{
		delete[] sales;
	}
	void SetSales();
	void ShowSales();
};

int main()
{
	Sales a;
	a.SetSales();
	a.ShowSales();
	Sales b(15);
	b.ShowSales();
	system("pause");
	return 0;
}
void Sales::SetSales()
{
	double sum = 0;
	for (int i = 0; i<rozmiar; i++)
	{
		cout << "Podaj " << i << " wartosc do struktury: " << endl;
		cin >> sales[i];
		if (i == 0)
			minimum = maksimum = sales[i];
		sum += sales[i];
		if (minimum > sales[i])
			minimum = sales[i];
		else if (maksimum < sales[i])
			maksimum = sales[i];



	}
	average = sum / rozmiar;
}
void Sales::ShowSales()
{
	cout << "Zawartosc struktury: " << endl;
	cout << "Wartosci z tablicy: " << endl;
	for (int k = 0; k<rozmiar; k++)
		cout << sales[k] << endl;
	cout << endl;
	cout << "Minimum: " << minimum << endl;
	cout << "Maksimum: " << maksimum << endl;
	cout << "Srednia: " << average << endl;
}


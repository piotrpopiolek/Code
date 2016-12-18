#include<iostream>
const int Max = 5;
double * fill_array(double ar[], int limit);
void show_array(const double * start, const double * end);
void revalue(double * start, const double * end, double n);
int main()
{
	using namespace std;
	double properties[Max];
	double * last = fill_array(properties, Max);
	show_array(properties, last);
	cout << "Podaj czynnik zmiany wartosci: ";
	double factor;
	while (!(cin >> factor))
	{
		cin.clear();
		while (cin.get() != '\n')
			continue;
		cout << "Niepoprawna wartosc; podaj liczbe: ";
	}
	revalue(properties, last, factor);
	show_array(properties, last);
	cout << "Gotowe\n";
	system("pause");
	return 0;
}
double * fill_array(double ar[], int limit)
{
	using namespace std;
	double temp;
	int i;
	for (i = 0; i < limit; i++)
	{
		cout << "Podaj wartosc nr " << (i + 1) << ": ";
		cin >> temp;
		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bledne dane, wprowadzanie danych przerwane.\n";
			break;
		}
		else if (temp < 0)
			break;
		ar[i] = temp;
	}
	return &ar[i];
}
void show_array(const double * start, const double * end)
{
	using namespace std;
	for (const double * i=start; i!=end; i++)
	{
		cout << *i << endl;
	}
}
void revalue(double * start, const double * end, double n)
{
	for (double * i = start; i != end; i++)
		*i = *i*n;
}
#include<iostream>
#include<string>
using namespace std;
const int Seasons = 4;
const char * Snames[Seasons] =
{ "Wiosna","Lato","Jesien","Zima" };
void fill(double Tab[]);
void show(double Tab[]);
int main()
{
	double Tablica[Seasons];
	fill(Tablica);
	show(Tablica);
	system("pause");
	return 0;
}
void fill(double Tab[])
{
	for (int i = 0; i < Seasons; i++)
	{
		cout << "Podaj wydatki za okres >>" << Snames[i] << "<<: ";
		cin >> Tab[i];
	}
}
void show(double Tab[])
{
	double total = 0.0;
	cout << "\nWydatki\n";
	for (int i = 0; i < Seasons; i++)
	{
		cout << Snames[i] << ": " << Tab[i] << " zl" << endl;
		total += Tab[i];
	}
	cout << "Lacznie wydatki rocznie: " << total << " zl" << endl;
}
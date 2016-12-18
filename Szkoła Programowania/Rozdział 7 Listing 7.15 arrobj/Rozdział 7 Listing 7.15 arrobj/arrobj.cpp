#include<iostream>
#include<array>
#include<string>
using namespace std;
const int Seasons = 4;
const array<string, Seasons> Snames =
{ "Wiosna","Lato","Jesien","Zima" };
void fill(array<double, Seasons>* pa);
void show(array<double, Seasons> da);
int main()
{
	array<double, Seasons> expenses;
	fill(&expenses);
	show(expenses);
	system("pause");
	return 0;
}
void fill(array<double, Seasons>* pa)
{
	for (int i = 0; i < Seasons; i++)
	{
		cout << "Podaj wydatki za okres >>" << Snames[i] << "<<: ";
		cin >> (*pa)[i];
	}
}
void show(array<double, Seasons> da)
{
	double total = 0.0;
	cout << "\nWydatki\n";
	for (int i = 0; i < Seasons; i++)
	{
		cout << Snames[i] << ": " << da[i] << " zl" << endl;
		total += da[i];
	}
	cout << "Lacznie wydatki rocznie: " << total << " zl" << endl;
}
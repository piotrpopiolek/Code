#include<iostream>
#include<string>
using namespace std;
const int Seasons = 4;
struct Pory
{
	double wydatki;
};
const char * Snames[Seasons] =
{ "Wiosna","Lato","Jesien","Zima" };
void fill(Pory & W);
void show(Pory & W);
int main()
{
	Pory W;
	fill(W);
	show(W);
	system("pause");
	return 0;
}
void fill(Pory & W)
{
	for (int i = 0; i < Seasons; i++)
	{
		cout << "Podaj wydatki za okres >>" << Snames[i] << "<<: ";
		cin >> W.wydatki;
	}
}
void show(Pory & W)
{
	double total = 0.0;
	cout << "\nWydatki\n";
	for (int i = 0; i < Seasons; i++)
	{
		cout << Snames[i] << ": " << W.wydatki << " zl" << endl;
		total += W.wydatki;
	}
	cout << "Lacznie wydatki rocznie: " << total << " zl" << endl;
}
#include<iostream>
using namespace std;
void fill_array(double Tab[], int & roz);
void show_array(double Tab[], int roz);
void reverse_array(double Tab[], int roz);
int main()
{
	const int rozmiar = 10;
	int ile = rozmiar;
	double Tablica[rozmiar];
	fill_array(Tablica, ile);
	show_array(Tablica, ile);
	reverse_array(Tablica, ile);
	show_array(Tablica, ile);
	system("pause");
	return 0;
}
void fill_array(double Tab[], int & roz)
{
	int i = 0;
	cout << "Podawaj wartosci do tablicy:\n";
	while (cin >> Tab[i] && i < roz)
	{
		i++;
	}
	roz = i;
}
void show_array(double Tab[], int roz)
{
	for (int i = 0; i < roz; i++)
	{
		cout << Tab[i] << endl;
	}
	cout << endl;
}
void reverse_array(double Tab[], int roz)
{
	int r = roz;
	for (int i = 0; i < roz/2; i++,r--)
	{
		swap(Tab[r - 1], Tab[i]);
	}
}
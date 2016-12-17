#include<iostream>
#include<vector>
#include<ctime>
#include<cstdlib>
using std::vector;
using std::cin;
using std::cout;
using std::endl;
int main()
{
	srand(time(NULL));
	const int n = 30;
	vector<int> Tablica(n);
	for (int &i : Tablica)
	{
		i = rand() % 10;
	}
	cout << "Tablica zawiera " << (n) << " elementow.\n";
	cout << "Zwykle wyswietlanie tablicy: \n";
	for (int i : Tablica)
	{
		cout << i << " ";
	}
	cout << endl << "Wyswietlanie za pomoca iteratora: \n";
	for (vector<int>::iterator i = Tablica.begin(); i != Tablica.end(); i++)
	{
		cout << *i << " ";
	}
	cout << "\nPodaj jaka wartosc chcesz wyszukac: ";
	int a; cin >> a;
	for (int i=0; i <Tablica.size(); i++)
	{
		if (Tablica[i] == a)
		{
			cout << a << " wystepuje na pozycji " << i << "." << endl;
			vector<int>::iterator k = Tablica.begin()+i;
			Tablica.erase(k);
			i--;
		}
	}
	for (auto i = Tablica.begin(); i != Tablica.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}
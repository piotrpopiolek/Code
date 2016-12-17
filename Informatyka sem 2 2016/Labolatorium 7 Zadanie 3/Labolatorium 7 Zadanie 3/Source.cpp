#include<iostream>
#include<vector>
#include<list>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
	srand(time(NULL));
	cout << "Ile elementow dodac? ";
	int n; cin >> n;
	vector<int> Tablica(n);
	for (int &i : Tablica)
	{
		i = rand() % 10;
	}
	for (auto i=Tablica.begin(); i!=Tablica.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;
	cout << "Jakiej wartosci szukasz? ";
	int t; cin >> t;
	vector<int>::iterator temp=find(Tablica.begin(), Tablica.end(), t);
	Tablica.erase(temp);
	for (auto i = Tablica.begin(); i != Tablica.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl << "Lista: " << endl;
	list<int> Lista(n);
	for (list<int>::iterator i = Lista.begin(); i != Lista.end(); i++)
	{
		*i = rand() % 10;
	}
	for (int i : Lista)
	{
		cout << i << " ";
	}
	cout << endl << "Jakiej wartosci szukasz? ";
	cin >> t;
	list<int>::iterator t2 = find(Lista.begin(), Lista.end(), t);
	if (t2 != Lista.end())
	{
		cout << "Element byl w liscie. Usuwam go z listy." << endl;
		Lista.remove(t);
	}
	else
		cout << "Elementu nie bylo w liscie." << endl;
	for (int i : Lista)
	{
		cout << i << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}
#include<iostream>
#include<list>
#include<ctime>
#include<cstdlib>
using std::cout;
using std::endl;
using std::cin;
using std::list;
int main()
{
	int n = 10;
	list<int> Lista(0);
	int a;
	std::srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a = rand() % 10;
		Lista.push_back(a);
	}
	cout << "Wyswietl liste: " << endl;
	for (auto & i : Lista)
	{
		cout << i << " ";
	}
	cout << endl;
	cout << "Wyswietl za pomoca iteratorow: " << endl;
	for (list<int>::iterator i = Lista.begin(); i != Lista.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;
	cout << "Jaka wartosc chcesz usunac? ";
	int t; cin >> t;
	Lista.remove(t);
	for (list<int>::iterator i = Lista.begin(); i != Lista.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}
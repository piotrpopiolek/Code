#include<iostream>
#include<list>
#include<string>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
	list<string> Bolek;
	cout << "q konczy wczytywanie\n";
	cout << "Podaj liste Bolka:" << endl;
	string temp;
	while(cin>>temp && temp!="q")
	{
		Bolek.push_back(temp);
	}
	list<string> Lolek;
	cout << "Podaj liste Lolka:" << endl;
	while (cin >> temp && temp != "q")
	{
		Lolek.push_back(temp);
	}
	Bolek.sort();
	Lolek.sort();
	cout << "Lista Bolek\n";
	for (string i : Bolek)
	{
		cout << i << " ";
	}
	cout << endl;
	cout << "Lista Lolek\n";
	for (string i : Lolek)
	{
		cout << i << " ";
	}
	cout << endl;
	list<string> Lolek_Bolek;
	merge(Lolek.begin(), Lolek.end(), Bolek.begin(),  Bolek.end(), inserter (Lolek_Bolek,Lolek_Bolek.begin()));
	Lolek_Bolek.unique();
	cout << "Lista Lolek_Bolek\n";
	for (string i : Lolek_Bolek)
	{
		cout << i << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}
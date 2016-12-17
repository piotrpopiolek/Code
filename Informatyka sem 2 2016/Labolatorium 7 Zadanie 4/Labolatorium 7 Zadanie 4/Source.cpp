#include<iostream>
#include<vector>
#include<list>
#include<cstdlib>
#include<algorithm>
class Comp
{
public:
	bool operator()(int i, int j)
	{
		return i > j;
	}
}porownaj;
using namespace std;
int main()
{
	vector<int> Tab(0);
	cout << "Podaj ilosc elementow: " << endl;
	int n; cin >> n;
	for (int i = 0; i < n; i++)
	{
		int t = rand() % n;
		Tab.push_back(t);
	}
	for (vector<int>::iterator i = Tab.begin(); i != Tab.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;
	vector<int>::iterator min = min_element(Tab.begin(), Tab.end());
	vector<int>::iterator max = max_element(Tab.begin(), Tab.end());
	cout << "Wartosc minimalna to: " << *min << endl;
	cout << "Wartosc maksymalna to: " << *max << endl;
	sort(Tab.begin(), Tab.end());
	cout << endl;
	for (vector<int>::iterator i = Tab.begin(); i != Tab.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;
	sort(Tab.begin(), Tab.end(),porownaj);
	cout << endl;
	for (vector<int>::iterator i = Tab.begin(); i != Tab.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Ilosc obiektow " << i << " w wektorze: " << count(Tab.begin(), Tab.end(), i) << endl;
	}
	cout << endl;
	system("pause");
	return 0;
}
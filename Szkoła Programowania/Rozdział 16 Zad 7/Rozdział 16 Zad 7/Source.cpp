#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> Lotto(int size, int m);
int main()
{
	vector<int> winners;
	winners = Lotto(49, 6);
	for (int i : winners)
		cout << i << " ";
	cout << endl;
	system("pause");
	return 0;
}
vector<int> Lotto(int size, int m)
{
	vector<int> zakres(size);
	int j = 1;
	for (int & i : zakres)
	{
		i = j;
		j++;
	}
	random_shuffle(zakres.begin(), zakres.end());
	vector<int> wynik(zakres.begin(), zakres.begin() + m);
	return wynik;
}
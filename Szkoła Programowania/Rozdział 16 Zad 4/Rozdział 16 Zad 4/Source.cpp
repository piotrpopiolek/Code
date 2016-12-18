#include<iostream>
#include<vector>
#include<ctime>
#include<cstdlib>
#include<algorithm>
using namespace std;
template <class T>
int reduce(vector<T> & tab, int size);
int main()
{
	srand(time(NULL));
	const int size = 30;
	vector<int> VectorInt(size);
	for (int &i : VectorInt)
	{
		i = rand() % 10;
		cout << i << " ";
	}
	cout << endl;
	int s = reduce<int>(VectorInt, size);
	for (int i : VectorInt)
	{
		cout << i << " ";
	}
	cout << endl;
	cout << "Rozmiar wektora teraz wynosi: " << s << endl;
	cout << endl;
	system("pause");
	return 0;
}
template <class T>
int reduce(vector<T> & tab, int size)
{
	stable_sort(tab.begin(), tab.end());
	vector<T>::iterator i = unique(tab.begin(), tab.end());
	tab.resize(distance(tab.begin(), i));
	return tab.size();
}
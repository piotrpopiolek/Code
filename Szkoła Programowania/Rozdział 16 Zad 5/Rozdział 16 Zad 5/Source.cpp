#include<iostream>
#include<vector>
#include<ctime>
#include<cstdlib>
#include<algorithm>
#include<fstream>
#include<string>
using namespace std;
template <class T>
int reduce(vector<T> & tab, int size);
int main()
{
	vector<string> wordlist;
	ifstream inFile;
	string nazwaPliku = "slowa.txt";
	inFile.open(nazwaPliku);
	if (!inFile.is_open()) //nieudana proba otwarcia pliku
	{
		cout << "Otwarcie pliku " << nazwaPliku << " nie powiodlo sie.\n";
		cout << "Program zostanie zakonczony.\n";
		exit(EXIT_FAILURE);
	}
	string temp;
	while (inFile >> temp)
	{
		wordlist.push_back(temp);
	}
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
	vector<double> VectorDouble({ 5.4,3.4,1.2,1.2,1.2,4.5,6.3,7.5 });
	for (double i : VectorDouble)
	{
		cout << i << " ";
	}
	cout << endl;
	s = reduce(VectorDouble, VectorDouble.size());
	for (double i : VectorDouble)
	{
		cout << i << " ";
	}
	cout << endl;
	cout << "Rozmiar wektora teraz wynosi: " << s << endl;
	for (string i : wordlist)
	{
		cout << i << " ";
	}
	cout << endl;
	s = reduce(wordlist, wordlist.size());
	for (string i : wordlist)
	{
		cout << i << " ";
	}
	cout << endl;
	cout << "Rozmiar wektora teraz wynosi: " << s << endl;
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
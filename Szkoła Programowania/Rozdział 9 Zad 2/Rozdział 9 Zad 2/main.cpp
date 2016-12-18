#include<iostream>
#include<string>
using namespace std;
void strcount(string str);
int main()
{
	string input;
	cout << "Wprowadz wiersz: \n";
	getline(cin, input);
	while (input!="")
	{
		strcount(input);
		cout << "Wprowadz nastepny wiersz (wiersz pusty konczy wprowadzanie):\n";
		getline(cin, input);
	}
	cout << "Koniec\n";
	system("pause");
	return 0;
}
void strcount(string str)
{
	static int total = 0;
	int count = 0;
	cout << "\"" << str << "\" zawiera ";
	int i = 0;
	while (str[i])
	{
		count++;
		i++;
	}
	total += count;
	cout << count << " znakow\n";
	cout << "Lacznie " << total << " znakow\n";
}
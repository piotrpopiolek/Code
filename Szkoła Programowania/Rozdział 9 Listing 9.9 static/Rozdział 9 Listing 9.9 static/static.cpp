#include<iostream>
const int ArSize = 10;
void strcount(const char * str);
int main()
{
	using namespace std;
	char input[ArSize];
	char next;
	cout << "Wprowadz wiersz: \n";
	cin.get(input, ArSize);
	while (cin)
	{
		cin.get(next);
		while (next != '\n') //wiersz nie zmiescil sie w buforze!
			cin.get(next); //porzucenie reszty znakow z wejscia
		strcount(input);
		cout << "Wprowadz nastepny wiersz (wiersz pusty konczy wprowadzanie):\n";
		cin.get(input, ArSize);
	}
	cout << "Koniec\n";
	system("pause");
	return 0;
}
void strcount(const char * str)
{
	using namespace std;
	static int total = 0;
	int count = 0;
	cout << "\"" << str << "\" zawiera ";
	while (*str++) //przejdz na koniec ciagu
		count++;
	total += count;
	cout << count << " znakow\n";
	cout << "Lacznie " << total << " znakow\n";
}
#include <iostream>
#include<cstdlib>
#include<ctime>
#include"strngbad.h"
const int ArSize = 10;
const int MaxLen = 81;
int main()
{
	using namespace std;
	StringBad name;
	cout << "Czesc, jak masz na imie?\n>>";
	cin >> name;
	cout << name << ", wpisz do " << ArSize << " krotkich powiedzonek <pusty wiersz konczy wprowadzanie:>\n";
	StringBad sayings[ArSize];
	char temp[MaxLen];
	int i;
	for (i = 0; i < ArSize; i++)
	{
		cout << i + 1 << ": ";
		cin.get(temp, MaxLen);
		while (cin&& cin.get() != '\n')
			continue;
		if (!cin || temp[0] == '\0')
			break;
		else
			sayings[i] = temp;
	}
	int total = i;
	if (total > 0)
	{
		cout << "Oto Twoje powiedzonka:\n";
		for (i = 0; i < total; i++)
			cout << sayings[i] << "\n";
		StringBad * shortest = &sayings[0];
		StringBad * first = &sayings[0];
		for (i = 1; i < total; i++)
		{
			if (sayings[i].length() < shortest->length())

				shortest = &sayings[i];
			if (sayings[i] < *first)
				first = &sayings[i];
		}
		cout << "Najkrotsze powiedzonko:\n" << *shortest << endl;
		cout << "Powiedzonko alfabetycznie pierwsze:\n" << *first << endl;
		srand(time(NULL));
		int choice = rand() % total;
		StringBad * favorite = new StringBad(sayings[choice]);
		cout << "Moje ulubione powiedzonko:\n" << *favorite << endl;
		delete favorite;
	}
	else
		cout << "Nie ma o czym gadac, co?\n";
	cout << "Zegnam.\n";
	system("pause");
    return 0;
}

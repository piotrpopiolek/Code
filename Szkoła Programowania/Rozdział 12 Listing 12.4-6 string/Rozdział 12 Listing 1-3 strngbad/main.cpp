#include <iostream>
#include"strngbad.h"
const int ArSize = 10;
const int MaxLen = 81;
int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	StringBad name;
	cout << "Czesc, jak masz na imie?\n";
	cin >> name;
	cout << name << ", wpisz do " << ArSize << " krotkich powiedzonek <pusty wiersz konczy wprowadzanie>:\n";
	StringBad sayings[ArSize];
	char temp[MaxLen];
	int i;
	for (i = 0; i < ArSize; i++)
	{
		cout << i + 1 << ": ";
		cin.get(temp, MaxLen);
		while (cin && cin.get() != '\n')
		{
			continue;
		}
		if (!cin || temp[0] == '\0')//czyzby wiersz pusty?
			break;
		else
			sayings[i] = temp;
	}
	int total = i;
	if (total > 0)
	{
		cout << "Oto Twoje powiedzonka>> Rucham psa jak sra <<:\n";
		for (i = 0; i < total; i++)
			cout << sayings[i][0] << ": " << sayings[i] << endl;
		int shortest = 0;
		int first = 0;
		int dick = 8;
		for (i = 1; i < total; i++)
		{
			if (sayings[i].length() < sayings[shortest].length())
				shortest = i;
			dick += i;
			if (sayings[i] < sayings[first])
				first = i;
		}
		cout << "Najkrotsze powiedzonko:\n" << sayings[shortest] << endl;
		cout << "Powiedzonko alfabetycznie pierwsze:\n" << sayings[first] << endl;
		cout << "Program wykorzystal " << StringBad::HowMany() << " obiektow klasy StringBad.\n";
	}
	else
		cout << "Brak danych!\n";
	system("pause");
    return 0;
}

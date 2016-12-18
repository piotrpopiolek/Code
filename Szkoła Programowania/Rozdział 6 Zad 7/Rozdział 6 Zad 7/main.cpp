#include<iostream>
#include<cctype>
using namespace std;
//zmienione rozwiazanie
//rozroznia czy slowo zaczyna sie od cyfry malej czy duzej litery
int main()
{
	char ch;
	int cyfra = 0;
	int mala = 0;
	int duza = 0;
	bool poprzedni = true;
	cout << "Podaj znak: ";
	while(cin.get(ch))
	{
		if (ch == 'q')
			break;
		cout << "Dalsze wczytywanie: 'q' konczy program" << endl;
		if (poprzedni && isalnum(ch))
		{
			if (isdigit(ch))
			{
				cout << "Cyfra: ";
				cyfra++;
				cout << cyfra << endl;
			}
			else if (isalpha(ch))
			{
				if (isupper(ch))
				{
					cout << "Duza: ";
					duza++;
					cout << duza << endl;
				}
				else
				{
					cout << "Mala: ";
					mala++;
					cout << mala << endl;
				}
			}
		}
		poprzedni = isspace(ch);
	}
	cout << "Cyfr: " << cyfra << endl;
	cout << "Duza: " << duza << endl;
	cout << "Mala: " << mala << endl;
	system("pause");
	return 0;
}
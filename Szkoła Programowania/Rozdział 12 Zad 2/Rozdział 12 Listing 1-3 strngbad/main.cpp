#include <iostream>
#include<cstdlib>
#include<ctime>
#include"strngbad.h"
const int ArSize = 10;
const int MaxLen = 81;
int main()
{
	using namespace std;
	StringBad name = "Piotr Popiolek ";
	StringBad city = "Russow";
	StringBad dodaj = name + city;
	cout << dodaj << endl;
	dodaj.StringLow();
	cout << dodaj << endl;
	dodaj.StringUp();
	cout << dodaj << endl;
	cout << dodaj.IleRazy('U') << endl;
	StringBad s1(" i ucze sie C++.");
	StringBad s2 = "Podaj swoje imie: ";
	StringBad s3;
	cout << s2;
	cin >> s3;
	s2 = "Mam na imie ";
	s2 = s2 + s3;
	cout << s2 << ".\n";
	s2 = s2 + s1;
	s2.StringUp();
	cout << "Ciag\n" << s2 << "\nzawiera " << s2.IleRazy('A') << " 'A'.\n";
	s1 = "czerwona";
	StringBad rgb[3] = { StringBad(s1),StringBad("zielona"),StringBad("niebieska") };
	cout << "Podaj nazwe barwy podstawowej: ";
	StringBad ans;
	bool success = false;
	while (cin >> ans)
	{
		ans.StringLow();
		for (int i = 0; i < 3; i++)
		{
			if (ans == rgb[i])
			{
				cout << "Prawidlowo!\n";
				success = true;
				break;
			}
		}
		if (success)
			break;
		else
			cout << "Sprobuj ponownie!\n";
	}
	system("pause");
    return 0;
}

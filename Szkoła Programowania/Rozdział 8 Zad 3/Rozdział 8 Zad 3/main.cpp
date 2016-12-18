#include<iostream>
#include<cctype>
#include<string>
using namespace std;
void zamien(string & tekst);
int main()
{
	string slowo;
	do
	{
		cout << "Podaj lancuch <q> konczy program: " << endl;
		getline(cin,slowo);					
		zamien(slowo);
		cout << slowo << endl;
	} while (slowo != "Q");
	system("pause");
	return 0;
}
void zamien(string & tekst)
{
	for (int i = 0; i < size(tekst); i++)
	{
		tekst[i] = toupper(tekst[i]);
	}
}
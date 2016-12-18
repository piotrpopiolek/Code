#include<iostream>
using namespace std;
#include<cstring> //dla strlen(),strcpy()
struct stringy
{
	char * str; //wskazuje lancuch
	int ct; //dlugosc lancucha bez '\0'
};
void set(stringy & A,char * tekst);
void show(const char * tekst);
void show(const char * tekst, int n);
int main()
{
	stringy beany;
	char testing[] = "Rzeczywistosc to juz nie to, co kiedys.";
	set(beany, testing);
	show(beany.str);
	show(beany.str, 2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Gotowe!");
	system("pause");
	return 0;
}
void set(stringy & A, char * tekst)
{
	A.ct = strlen(tekst);
	int i = 0;
	A.str = new char[A.ct + 1];
	while (i <= A.ct)
	{
		A.str[i] = tekst[i];
		i++;
	}
}
void show(const char * tekst)
{
	cout << tekst << endl;
}
void show(const char * tekst, int n)
{
	for (int i = 0; i < n; i++)
		cout << tekst << endl;
}

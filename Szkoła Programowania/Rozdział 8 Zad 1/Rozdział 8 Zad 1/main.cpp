#include<iostream>
using namespace std;
void tekst(char * t, int n = 1);
int main()
{
	tekst("Pepe",4);
	tekst("Adam");
	tekst("Karol");
	tekst("Damian", 5);
	tekst("Marek");
	system("pause");
	return 0;
}
void tekst(char * t, int n)
{
	static int licznik = 0;
	licznik++;
	if (n == 1)
	{
		cout << t << endl;
		return;
	}
	for (int i = 0; i < licznik; i++)
	{
		cout << t << endl;
	}
}
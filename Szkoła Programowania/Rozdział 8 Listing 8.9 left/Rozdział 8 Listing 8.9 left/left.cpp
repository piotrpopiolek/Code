#include<iostream>
const int ArSize = 80;
char * left(const char * str, int n = 1);
int main()
{
	using namespace std;
	char sample[ArSize];
	cout << "Podaj lancuch znakowy:\n";
	cin.get(sample, ArSize);
	char * ps = left(sample, 4);
	cout << ps << endl;
	delete[] ps;//zwolnienie starego lancucha
	ps = left(sample);
	cout << ps << endl;
	delete[] ps;
	system("pause");
	return 0;
}
//funkcja zwraca wskaznik na nowy lancuch skladajacy sie z pierwszych n znakow lancucha str
char * left(const char * str, int n)
{
	if (n < 0)
		n = 0;
	char * p = new char[n + 1];
	int i;
	for (i = 0; i < n && str[i]; i++)
		p[i] = str[i]; //kopiowanie znakow
	while (i <= n)
		p[i++] = '\0'; //wyzerowanie reszty lancucha
	return p;
}
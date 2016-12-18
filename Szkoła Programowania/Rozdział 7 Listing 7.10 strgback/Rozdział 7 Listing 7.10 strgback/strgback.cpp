#include<iostream>
char* buildstr(char c, int n);
int main()
{
	using namespace std;
	int times;
	char ch;
	cout << "Podaj znak: ";
	cin >> ch;
	cout << "Podaj liczbe calkowita: ";
	cin >> times;
	char* ps = buildstr(ch, times);
	cout << ps << endl;
	delete[] ps;
	ps = buildstr('+', 19);
	cout << ps << endl;
	delete[] ps;
	system("pause");
	return 0;
}
char* buildstr(char c, int n)
{
	char* psrt = new char[n + 1];
	psrt[n] = '\0'; //zakonczenie lancucha nullem
	while (n--)
		psrt[n] = c; //dopelnienie lancucha
	return psrt;
}
#include<iostream>
const int SLEN = 10;
inline void eatline()
{
	while (std::cin.get() != '\n')
		continue;
}
int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	char name[SLEN];
	char title[SLEN];
	cout << "Podaj swoje imie i nazwisko: ";
	cin.get(name, SLEN);
	if (cin.peek() != '\n')
		cout << "Przykro nam, miejsca wystarczy tylko na " << name << endl;
	eatline();
	cout << "Drogi(-a) " << name << ", podaj swoje stanowisko: \n";
	cin.get(title, SLEN);
	if (cin.peek() != '\n')
		cout << "Bylismy zmuszeni skrocic nazwe Twojego stanowiska.\n";
	eatline();
	cout << "Imie i nazwisko: " << name << "\nStanowisko: " << title << endl;
	system("pause");
	return 0;
}
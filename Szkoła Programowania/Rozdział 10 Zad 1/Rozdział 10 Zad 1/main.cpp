#include"Rachunek.h"
using namespace std;
int main()
{
	Rachunek Osoba;
	Osoba.pokaz();
	Osoba.depozyt(100);
	Osoba.wyplata(2000);
	Rachunek Pepe("Pepe", "1213", 123.2);
	Pepe.pokaz();
	Pepe.depozyt(100);
	Pepe.wyplata(50.2);
	system("pause");
	return 0;
}
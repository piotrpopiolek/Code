#include<iostream>
using namespace std;
struct Batonik
{
	char * tekst;
	double waga;
	int  kalorie;
};
void ustaw(Batonik & B, char * t = "Millenmium Munch", double w = 2.85, int k = 350);
void pokaz(const Batonik B);
int main()
{
	Batonik w1;
	ustaw(w1);
	pokaz(w1);
	Batonik w2 = { "Pepe", 2.3, 100 };
	pokaz(w2);
	Batonik w3;
	ustaw(w3, "Mars", 3, 30);
	pokaz(w3);
	system("pause");
	return 0;
}
void ustaw(Batonik & B, char * t, double w, int k)
{
	B.tekst = t;
	B.kalorie = k;
	B.waga = w;
}
void pokaz(const Batonik B)
{
	cout << "Nazwa: " << B.tekst << " Waga: " << B.waga << " Kalorie: " << B.kalorie << endl;
}
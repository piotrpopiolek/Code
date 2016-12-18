#include<iostream>
#include<ctime>
#include<fstream>
#include<cstdlib>
using namespace std;
struct Complex
{
	double re;
	double lm;
};
Complex dodawanie(Complex& A, Complex& B)
{
	Complex sum;
	sum.re = A.re + B.re;
	sum.lm = A.lm + B.lm;
	return sum;
}
Complex mnozenie(Complex& A, Complex& B)
{
	Complex sum;
	sum.re = A.re*B.re - A.lm*B.lm;
	sum.lm = A.re*B.lm + A.lm*B.re;
	return sum;
}
double modul(Complex& A)
{
	return (sqrt(A.re*A.re + A.lm*A.lm));
}
void pokaz(Complex& A)
{
	cout << A.re << " " << A.lm << "i" <<endl;
}
int main()
{
	ofstream zapis;
	string nazwa = "dane.txt";
	zapis.open(nazwa);
	if (!zapis.is_open()) // sprawdza czy udalo sie otworzyc plik
	{
		cout << "Nie udalo sie otworzyc pliku\n";
		exit(EXIT_FAILURE);
	}
	srand(time(NULL));
	const int ile = 5;
	for (int i = 0; i < ile; i++)
	{
		zapis << rand() % 99 <<" "<< rand() % 99 << endl;
	}
	zapis.close();
	ifstream odczyt;
	odczyt.open(nazwa);
	if (!odczyt.is_open()) // sprawdza czy udalo sie otworzyc plik
	{
		cout << "Nie udalo sie otworzyc pliku\n";
		exit(EXIT_FAILURE);
	}
	double maxmodul = 0;
	Complex Lmodul;
	Complex suma = { 0,0 };
	Complex iloczyn = { 1,0 };
	Complex liczba;
	while (odczyt >> liczba.re >> liczba.lm)
	{
		pokaz(liczba);
		suma=dodawanie(suma, liczba);
		iloczyn=mnozenie(iloczyn, liczba);
		if (modul(liczba) > maxmodul)
		{
			Lmodul = liczba;
			maxmodul = modul(liczba);
		}
	}
	odczyt.close();
	cout << "Max modul to: " << maxmodul << endl;
	cout << "Postac algebraiczna tej liczby: "; 
	pokaz(Lmodul);
	cout << "Suma calosci: \n"; 
	pokaz(suma);
	cout << "Iloczyn calosci: \n";
	pokaz(iloczyn);
	system("pause");
	return 0;
}
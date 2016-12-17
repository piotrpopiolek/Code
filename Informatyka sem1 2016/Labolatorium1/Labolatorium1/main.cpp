#include<iostream>
#include<string>
using namespace std;
void Zadanie1();
void Zadanie2();
void Zadanie3();
int main()
{
	Zadanie1();
	Zadanie2();
	Zadanie3();
	system("pause");
	return 0;
}
void Zadanie1()
{
	cout << "Zadanie 1" << endl;
	cout << "Podaj imie: ";
	string imie; cin >> imie;
	cout << "Podaj nazwisko: ";
	string nazwisko; cin >> nazwisko;
	cout << "Twoje dane to: " << endl;
	cout << imie << " " << nazwisko << endl;
}
void Zadanie2()
{
	cout << "Zadanie 2" << endl;
	cout << "Podaj dwie liczby calkowite" << endl;
	int a, b; cin >> a >> b;
	cout << "Dodawanie" << endl;
	cout << a + b << endl;
	cout << "Odejmowanie" << endl;
	cout << a - b << endl;
	cout << "Mnozenie" << endl;
	cout << a * b << endl;
	cout << "Dzielenie" << endl;
	cout << a / b << endl;

}
void Zadanie3()
{
	cout << "Zadanie 3" << endl;
	cout << "Podaj boki trojkata" << endl;
	int a, b, c; cin >> a >> b >> c;
	bool warunek;
	if (a < b + c && b < a + c && c < a + b)
		warunek = true;
	else
		warunek = false;
	cout << "Czy trojkat o bokach: " << a << " " << b << " " << c << " da sie zbudowac?" << endl;
	if (warunek)
		cout << "Tak" << endl;
	else
		cout << "Nie" << endl;
}
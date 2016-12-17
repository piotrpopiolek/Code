#include<iostream>
#include<math.h>
using namespace std;
void Zadanie1();
template<typename T>
void DwaTypy(T a,T b);
void Zadanie2();
void Zadanie3();
void Zadanie4();
void Zadanie5();
void Zadanie6();
void Zadanie7();
void Zadanie8();
void Zadanie9();
int main()
{
	int numer_zadania;
	do
	{
		cout << "Podaj numer zadania, zero konczy program." << endl;
		cin >> numer_zadania;
		switch (numer_zadania)
		{
		case 0:
		{
			cout << "Koniec programu!" << endl;
			break;
		}
		case 1:
		{
			Zadanie1();
			break;
		}
		case 2:
		{
			Zadanie2();
			break;
		}
		case 3:
		{
			Zadanie3();
			break;
		}
		case 4:
		{
			Zadanie4();
			break;
		}
		case 5:
		{
			Zadanie5();
			break;
		}
		case 6:
		{
			Zadanie6();
			break;
		}
		case 7:
		{
			Zadanie7();
			break;
		}
		case 8:
		{
			Zadanie8();
			break;
		}
		case 9:
		{
			Zadanie9();
			break;
		}
		default:
		{
			cout << "Brak takiego zadania!" << endl;
			break;
		}
		}
	} while (numer_zadania != 0);
	system("pause");
	return 0;
}
void Zadanie1()
{
	cout << "Zadanie 1" << endl;
	cout << "Podaj dwie liczby calkowite:" << endl;
	int a, b; cin >> a >> b;
	DwaTypy(a, b);
	cout << "Podaj dwie liczby zmiennoprzecinkowe: " << endl;
	double c, d; cin >> c >> d;
	DwaTypy(c, d);
}
template<typename T>
void DwaTypy(T a,T b)
{
	cout << "Dodawanie: " << endl;
	cout << a+b << endl;
	cout << "Odejmowanie: " << endl;
	cout << a - b << endl;
	cout << "Mnozenie: " << endl;
	cout << a * b << endl;
	cout << "Dzielenie: " << endl;
	cout << a / b << endl;
}
void Zadanie2()
{
	cout << "Zadanie 2" << endl;
	cout << "Rozmiar zmiennych" << endl;
	cout << "bool : " << sizeof(bool) << endl;
	cout << "char : " << sizeof(char) << endl;
	cout << "int : " << sizeof(int) << endl;
	cout << "short : " << sizeof(short) << endl;
	cout << "long : " << sizeof(long) << endl;
	cout << "float : " << sizeof(float) << endl;
	cout << "double : " << sizeof(double) << endl;
	cout << "unsigned : " << sizeof(unsigned) << endl;
	cout << "signed : " << sizeof(signed) << endl;
	cout << "unsigned int : " << sizeof(unsigned int) << endl;
}
void Zadanie3()
{
	cout << "Zadanie 3" << endl;
	cout << "Podaj liczbe zmiennoprzecinkowa" << endl;
	float a; cin >> a;
	cout << "a)" << defaultfloat << a << endl;
	cout << "b)" << scientific << a << endl;
	cout << "c)" << hexfloat << a << endl;
	cout.precision(3);
	cout << "d)" << a << endl;
	cout << "e)" << scientific << a << endl;
}
void Zadanie4()
{
	cout << "Zadanie 4" << endl;
	cout << "Wybiez dzialanie" << endl;
	cout << "a - dodawanie b - odejmowanie c - mnozenie d - dzielenie" << endl;
	char znak; cin >> znak;
	cout << "Podaj dwie liczby" << endl;
	double a, b; cin >> a >> b;
	switch (znak)
	{
	case 'a':
	{
		cout << "Dodawanie " << endl;
		cout << a + b << endl;
		break;
	}
	case 'b':
	{
		cout << "Odejmowanie " << endl;
		cout << a - b << endl;
		break;
	}
	case 'c':
	{
		cout << "Mnozenie " << endl;
		cout << a * b << endl;
		break;
	}
	case 'd':
	{
		cout << "Dzielenie " << endl;
		cout << a / b << endl;
		break;
	}
	default:
	{
		cout << "Brak takiej operacji!" << endl;
		break;
	}
	}
}
void Zadanie5()
{
	cout << "Zadanie 5" << endl;
	int i = 10;
	cout << i++ << endl;
	cout << ++i << endl;
	cout << --i << endl;
	cout << i++ << endl;
}
void Zadanie6()
{
	cout << "Zadanie 6" << endl;
	const int zakres = 10;
	for (int i = 0; i < zakres; i++)
	{
		cout << i << " ";
	}
	cout << endl;
	int i = 0;
	while (i<zakres)
	{
		cout << i << " ";
		i++;
	}
	i = 0;
	cout << endl;
	do
	{
		cout << i << " ";
		i++;
	} while (i < zakres);
	cout << endl;
}
void Zadanie7()
{
	cout << "Zadanie 7" << endl;
	const int zakres = 500;
	for (int i = 0; i <= zakres; i++)
	{
		if (i % 7 == 0)
			cout << i << " ";
	}
	cout << endl;
}
void Zadanie8()
{
	cout << "Zadanie 8" << endl;
	const int zakres = 10000;
	double suma1 = 0;
	int kwadrat;
	for (int i = 1; i <= zakres; i++)
	{
		kwadrat = i*i;
		suma1 += double(1.0 / kwadrat);
	}
	double suma2 = 0;
	for (int i = zakres; i > 0; i--)
	{
		kwadrat = i*i;
		suma2 += double(1.0 / kwadrat);
	}
	cout.precision(15);
	cout << suma1 << endl;
	cout << suma2 << endl;
}
void Zadanie9()
{
	cout << "Zadanie 9" << endl;
	const int zakres = 1000000;
	double suma = 0;
	for (int i = 0; i <= zakres; i++)
	{
		suma += double(pow(-1,i) / (2*i+1));
	}
	cout.precision(15);
	cout << suma << endl;
	cout << suma * 4 << endl;
}
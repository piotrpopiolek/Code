#include<iostream>
#include<string>
using namespace std;
void Zadanie2();
bool triangleExists(float a, float b, float c);
float triangleArea(float a, float b, float c);
void Zadanie3();
float toDegree(float rad);
void Zadanie4();
void Zadanie5();
unsigned long int recursiveFactorial(int n);
unsigned int iterativeFactorial(int n);
void Zadanie6();
unsigned int recursiveFibonnaci(int n);
void Zadanie7();
unsigned int iterativeFibonnaci(int n);
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
void Zadanie2()
{
	cout << "Zadanie 2" << endl;
	cout << "Podaj boki trojkata" << endl;
	float a, b, c; cin >> a >> b >> c;
	if (triangleExists(a, b, c))
	{
		cout << "Tak da sie zbudowac pole tego trojkata wyniesie: " << triangleArea(a, b, c)<< endl;
	}
	else
	{
		cout << "Nie da sie zbudowac takiego trojkata." << endl;
	}

}
bool triangleExists(float a, float b, float c)
{
	bool warunek;
	if (a < b + c && b < a + c && c < a + b)
		warunek = true;
	else
		warunek = false;
	return warunek;
}
float triangleArea(float a, float b, float c)
{
	float p = 0.5*(a + b + c);
	return sqrt(p*(p - a)*(p - b)*(p - c));
}
void Zadanie3()
{
	cout << "Zadanie 3" << endl;
	cout << "Podaj radiany do zamiany na stopnie: ";
	float rad; cin >> rad;
	cout << rad << " radiany to: " << toDegree(rad) << " stopni." << endl;
}
float toDegree(float rad)
{
	const float PI = 3.1415;
	return (rad * 180 / PI);
}
void Zadanie4()
{
	cout << "Zadanie 4" << endl;
	cout << "Zadanie nie jest zaimplementowane" << endl;
}
void Zadanie5()
{
	cout << "Zadanie 5" << endl;
	cout << "Metoda rekurencyjna" << endl;
	cout << "Podaj n dla jakiego chcesz policzyc silnie" << endl;
	int n; cin >> n;
	cout << "Silnia wynosi: " << recursiveFactorial(n) << endl;
	cout << "Metoda iteracyjna" << endl;
	cout << "Podaj n dla jakiego chcesz policzyc silnie" << endl;
	cin >> n;
	cout << "Silnia wynosi: " << iterativeFactorial(n) << endl;
}
unsigned long int recursiveFactorial(int n)
{
	if (n == 0)
	{
		return 1;
	}
	if (n == 1)
	{
		return 1;
	}
	return (recursiveFactorial(n - 1)*n);
}
unsigned int iterativeFactorial(int n)
{
	if (n == 0)
	{
		return 1;
	}
	if (n == 1)
	{
		return 1;
	}
	unsigned int wynik = 1;
	for (int i = 1; i <= n; i++)
	{
		wynik *= i;
	}
	return wynik;
}
void Zadanie6()
{
	cout << "Zadanie 6" << endl;
	unsigned int zmienna = 99999999;
	cout << "Wypisuje wyrazy Fibonaciego mniejsze od "<<zmienna<< endl;
	for (int i = 0; recursiveFibonnaci(i) <= zmienna; i++)
	{
		cout << recursiveFibonnaci(i) << " ";
	}
	cout << endl;
}
//Funkcja rekurencyjna dla du¿ych n jest bardzo ma³o efektywna
unsigned int recursiveFibonnaci(int n)
{
	if ( n == 0 || n == 1)
		return 1;
	return recursiveFibonnaci(n - 1) + recursiveFibonnaci(n - 2);
}

void Zadanie7()
{
	cout << "Zadanie 7" << endl;
	unsigned int zmienna = 99999999;
	cout << "Wypisuje wyrazy Fibonaciego mniejsze od " << zmienna << endl;
	for (int i = 0; iterativeFibonnaci(i) <= zmienna; i++)
	{
		cout << iterativeFibonnaci(i) << " ";
	}
	cout << endl;
}
unsigned int iterativeFibonnaci(int n)
{
	unsigned int poprzedni1=0;
	unsigned int poprzedni2=1;
	for (int i = 0; i <= n; i++)
	{
		if (i % 2 != 0)
			poprzedni1 = poprzedni1 + poprzedni2;
		else
			poprzedni2 = poprzedni1 + poprzedni2;
	}
	if (n % 2 != 0)
		return poprzedni1;
	else
		return poprzedni2;
}
#include<iostream>
#include"AlgorytmNumeryczny.h"
#include"FunkcjaLiniowa.h"
#include"MiejscaZerowe.h"
#include"Funkcja.h"
#include"Pochodna.h"
#include"Sinus.h"
#include"Cosinus.h"
#include"FunkcjaKwadratowa.h"
using namespace std;
int main()
{
	short znak;
	cout << "Jaka funkcje chcesz testowac?" << endl;
	cout << "1) Liniowa\t2) Sinus\t3) Cosinus\t4) Kwadratowa\n";
	while (cin >> znak)
	{
		switch (znak)
		{
		case 1:
		{
			cout << "Podaj parametry funkcji Liniowej\n";
			cout << "Podaj a ";
			double a; cin >> a;
			cout << "Podaj b ";
			double b; cin >> b;
			cout << "Podaj x ";
			double x; cin >> x;
			FunkcjaLiniowa nowa(a, b, x);
			cout << "Podaj zakres dla bisekcji: \n";
			double k, d;
			cout << "Podaj k "; cin >> k;
			cout << "Podaj d "; cin >> d;
			MiejscaZerowe temp(&nowa);
			cout << "Miejsce zerowe funkcji: " << temp.Oblicz(k,d) << endl;
			Pochodna tem(&nowa);
			cout << "Pochodna w punkcie " << x << " wynosi " << tem.Oblicz(x) << endl;
			break;
		}
		case 2:
		{
			cout << "Podaj parametry funkcji Sinus\n";
			Sinus nowa;
			cout << "Podaj zakres dla bisekcji: \n";
			double k, d;
			cout << "Podaj k "; cin >> k;
			cout << "Podaj d "; cin >> d;
			MiejscaZerowe temp(&nowa);
			cout << "Miejsce zerowe funkcji: " << temp.Oblicz(k, d,0.001) << endl;
			Pochodna tem(&nowa);
			cout << "Podaj dla jakiej wartosci x policzyc pochodna \n";
			double x; cin >> x;
			cout << "Pochodna w punkcie " << x << " wynosi " << tem.Oblicz(x) << endl;
			break;
		}
		case 3:
		{
			cout << "Podaj parametry funkcji Cosinus\n";
			Cosinus nowa;
			cout << "Podaj zakres dla bisekcji: \n";
			double k, d;
			cout << "Podaj k "; cin >> k;
			cout << "Podaj d "; cin >> d;
			MiejscaZerowe temp(&nowa);
			cout << "Miejsce zerowe funkcji: " << temp.Oblicz(k, d, 0.001) << endl;
			Pochodna tem(&nowa);
			cout << "Podaj dla jakiej wartosci x policzyc pochodna \n";
			double x; cin >> x;
			cout << "Pochodna w punkcie " << x << " wynosi " << tem.Oblicz(x) << endl;
			break;
		}
		case 4:
		{
			cout << "Podaj parametry funkcji Kwadratowej\n";
			cout << "Podaj a ";
			double a; cin >> a;
			cout << "Podaj b ";
			double b; cin >> b;
			cout << "Podaj c ";
			double c; cin >> c;
			cout << "Podaj x ";
			double x; cin >> x;
			FunkcjaKwadratowa nowa(a, b, c, x);
			cout << "Podaj zakres dla bisekcji: \n";
			double k, d;
			cout << "Podaj k "; cin >> k;
			cout << "Podaj d "; cin >> d;
			MiejscaZerowe temp(&nowa);
			cout << "Miejsce zerowe funkcji: " << temp.Oblicz(k, d) << endl;
			Pochodna tem(&nowa);
			cout << "Pochodna w punkcie " << x << " wynosi " << tem.Oblicz(x) << endl;
			break;
		}
		}
		cout << "Jaka funkcje chcesz testowac?" << endl;
		cout << "1) Liniowa\t2) Sinus\t3) Cosinus\t4) Kwadratowa\n";
	}
	system("pause");
	return 0;
}
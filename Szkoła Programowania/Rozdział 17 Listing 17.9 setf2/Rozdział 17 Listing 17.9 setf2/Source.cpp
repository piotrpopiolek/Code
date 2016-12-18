#include<iostream>
#include<cmath>
int main()
{
	using namespace std;
	//zastosuj wyrownanie do lewej, pokaz znak plus, pokaz koncowe
	//zera, uzyj precyzji 3
	cout.setf(ios::left, ios_base::adjustfield);
	cout.setf(ios_base::showpos);
	cout.setf(ios_base::showpoint);
	cout.precision(3);
	//uzyj notacji naukowej i zapamietaj dotychczasowe ustawienie formatu
	ios_base::fmtflags old = cout.setf(ios_base::scientific, ios_base::floatfield);
	cout << "Wyrownanie do lewej:\n";
	long n;
	for (n = 1; n <= 41; n += 10)
	{
		cout.width(4);
		cout << n << "|";
		cout.width(12);
		cout << sqrt(double(n)) << "|\n";
	}
	//zmien na wyrownanie wewnetrzne
	cout.setf(ios_base::internal, ios_base::adjustfield);
	//przywroc domyslny styl wyswietlania liczb zmiennoprzecinkowych
	cout.setf(old, ios_base::floatfield);
	cout << "Wyrownanie wewnetrzne:\n";
	for (n = 1; n <= 41; n += 10)
	{
		cout.width(4);
		cout << n << "|";
		cout.width(12);
		cout << sqrt(double(n)) << "|\n";
	}
	//zastosuj wyrownanie do prawej, uzyj notacji staloprzecinkowej
	cout.setf(ios_base::right, ios_base::adjustfield);
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << "Wyrownanie do prawej:\n";
	for (n = 1; n <= 41; n += 10)
	{
		cout.width(4);
		cout << n << "|";
		cout.width(12);
		cout << sqrt(double(n)) << "|\n";
	}
	system("pause");
	return 0;
}
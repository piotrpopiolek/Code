#include<iostream>
template<typename T>
void Swap(T &, T &);
int main()
{
	using namespace std;
	int i = 10;
	int j = 20;
	cout << "i, j = " << i << ", " << j << ".\n";
	cout << "Uzycie funkcji obslugujacej typ int,"
		"wygenerowanej przez kompilator:\n";
	Swap(i, j); //generuje void Swap(int &,int &)
	cout << "Teraz i, j = " << i << ", " << j << ".\n";
	double x = 24.5;
	double y = 81.7;
	cout << "x, y = " << x << ", " << y << ".\n";
	cout << "Uzycie funkcji obslugujacej typ double,"
		"wygenerowanej przez kompilator:\n";
	Swap(x, y); //generuje void Swap(double &,double &)
	cout << "Teraz x, y = " << x << ", " << y << ".\n";
	system("pause");
	return 0;
}
//definicja szablonu funkcji
template<typename T>
void Swap(T & a, T & b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}
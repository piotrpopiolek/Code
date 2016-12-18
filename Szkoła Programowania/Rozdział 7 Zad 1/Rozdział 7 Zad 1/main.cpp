#include<iostream>
using namespace std;
double harmoniczna(double, double);
int main()
{
	double a, b;
	cout << "Podaj dwie liczby: " << endl;
	while ((cin >> a >> b) && a != 0 && b != 0)
	{
		cout << "Podaj dwie liczby: " << endl;
		cout << "Srednia harmoniczna wynosi: " << harmoniczna(a, b) << endl;
	}
	system("pause");
	return 0;
}
double harmoniczna(double x, double y)
{
	return ((2.0*x*y) / (x + y));
}
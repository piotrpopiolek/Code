#include<iostream>
void cheers(int);
double cube(double x);
int main()
{
	using namespace std;
	cheers(5);
	cout << "Podaj liczbe: ";
	double side;
	cin >> side;
	double volume = cube(side);
	cout << "Kostka majaca bok " << side << " cm ma pojemnosc ";
	cout << volume << " centymetrow szesciennych.\n";
	cheers(cube(2));
	system("pause");
	return 0;
}
void cheers(int n)
{
	using namespace std;
	for (int i = 0; i < n; i++)
		cout << "Czesc! ";
	cout << endl;
}
double cube(double x)
{
	return x*x*x;
}
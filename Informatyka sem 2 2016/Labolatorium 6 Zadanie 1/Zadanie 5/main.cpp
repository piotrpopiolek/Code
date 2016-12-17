#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Vector.hpp"
using namespace std;
int main() 
{
	srand(time(nullptr));
	int n;
	cout << "Podaj rozmiar wektora V1: ";
	cin >> n;
	Vector<int > v1(1);
	try 
	{
		v1 = Vector<int >(n);
	}
	catch (const std::bad_alloc & e)
	{
		cout << e.what() << endl;
	}
	for (size_t i = 0; i < n; i++)
		v1[i] = rand() % 100;
	cout << "V1: " << v1 << endl << endl;
	try
	{
	cout << "Ktory element V1 chcesz wyswietlic? (od 0 do " << (n - 1) << ")";
	cin >> n;
		cout << n << "-ty element V1 to: " << v1[n] << endl << endl;
	}
	catch (const std::domain_error & e)
	{
		cout << e.what() << endl;
	}
	cout << "Podaj rozmiar wektora V2: ";
	cin >> n;
	Vector<int > v2(n);
	for (size_t i = 0; i < n; i++)
		v2[i] = rand() % 100;
	cout << "V2: " << v2 << endl << endl;
	try 
	{
		cout << "V1 + V2: " << (v1 + v2) << endl;
		cout << "V1 - V2: " << (v1 - v2) << endl;
	}
	catch (const std::out_of_range & e)
	{
		cout << e.what() << endl;
	}
	system("pause");
	return 0;
}
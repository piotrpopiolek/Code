#include<iostream>
extern int tom; //zmienna tom zdefiniowana gdzie indziej
static int dick = 10; //przeslania zewnetrzna wersje zmiennej dick
int harry = 200; //bez konfliktow z pliku twofile1
void remote_access()
{
	using namespace std;
	cout << "Funkcja remote_access() zwraca nastepujace adresy:\n";
	cout << &tom << " = &tom, " << &dick << " = &dick, ";
	cout << &harry << " = &harry\n";
}
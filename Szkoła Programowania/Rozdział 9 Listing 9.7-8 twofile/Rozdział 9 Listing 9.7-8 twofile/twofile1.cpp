#include<iostream> //przeznaczony do kompilacji z plikiem twofile2.cpp
int tom = 3; //definicja zmiennej zewnetrznej
int dick = 30; //definicja zmiennej zewnetrznej
static int harry = 300; //zmienna statyczna, laczenie wewnetrzne
void remote_access();
int main()
{
	using namespace std;
	cout << "Funkcja main() zwraca nastepujace adresy:\n";
	cout << &tom << " = &tom, " << &dick << " = &dick, ";
	cout << &harry << " = &harry\n";
	remote_access();
	system("pause");
	return 0;
}

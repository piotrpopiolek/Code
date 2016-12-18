#include<iostream>
#include"Dma.h"
int main()
{
	using std::cout;
	using std::endl;
	baseDma shirt("Portabelly", 8);
	lacksDma balloon("czerwony", "Blimpo", 4);
	hasDma map("Merkator", "Buffalo Keys", 5);
	cout << "Wypisywanie obiektu baseDma:\n";
	cout << shirt << endl;
	cout << "Wypisywanie obiektu lacksDma:\n";
	cout << balloon << endl;
	cout << "Wypisywanie obiektu hasDma:\n";
	cout << map << endl;
	lacksDma balloon2(balloon);
	cout << "Wynik kopiowania lacksDma:\n";
	cout << balloon2 << endl;
	hasDma map2;
	map2 = map;
	cout << "Wynik przypisania hasDma:\n";
	cout << map2 << endl;
	system("pause");
	return 0;
}
#include<iostream>
#include"hasDma.h"
#include"baseDma.h"
#include"lacksDma.h"
int main()
{
	using std::cout;
	using std::endl;
	{
		baseDma shirt("Portabelly", 8);
		lacksDma balloon("czerwony", "Blimpo", 4);
		hasDma map("Merkator", "Buffalo Keys", 5);
		baseDma a;
		a = shirt;
		a.View();
		lacksDma b;
		b = balloon;
		b.View();
		cout << "Wypisywanie obiektu baseDma:\n";
		shirt.View();
		cout << "Wypisywanie obiektu lacksDma:\n";
		balloon.View();
		cout << "Wypisywanie obiektu hasDma:\n";
		map.View();
		lacksDma balloon2(balloon);
		cout << "Wynik kopiowania lacksDma:\n";
		balloon2.View();
		hasDma map2(map);
		hasDma map3 = map2;
		cout << "Wynik przypisania hasDma:\n";
		map2.View();
	}
	system("pause");
	return 0;
}
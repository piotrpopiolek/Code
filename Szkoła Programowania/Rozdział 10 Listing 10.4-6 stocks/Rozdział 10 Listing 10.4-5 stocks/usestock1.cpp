#include<iostream>
#include"stock10.h"
int main()
{
	{
		using std::cout;
		using std::ios_base;
		cout << "Tworzenie nowych obiektow przy uzyciu konstruktorow\n";
		Stock stock1("NanoSmart", 20, 12.50);
		stock1.show();
		Stock stock2 = Stock("BurakPOL",2,2.0);
		stock2.show();
		cout << "Przypisanie stock1 do stock2:\n";
		stock2 = stock1;
		cout << "Wypis ze stock1 i stock2:\n";
		stock1.show();
		stock2.show();
		cout << "Wyzerowanie obiektu konstruktorem: \n";
		stock1 = Stock("FutroPol", 10, 50.0);
		cout << "Nowa wersja: \n";
		stock1.show();
	}
	system("pause");
	return 0;
}
#include<iostream>
#include"stock10.h"
int main()
{
	const int STKS = 4;
	Stock stocks[STKS] =
	{
		Stock("NanoSmart",12,20.0),
		Stock("BurakPOL",200,2.0),
		Stock("GruzPOL",130,3.25),
		Stock("FutroPOL",60,6.5)
	};
	using std::cout;
	cout << "Portfel inwestycyjny:\n";
	int st;
	for (st = 0; st < STKS; st++)
		stocks[st].show();
	//ustawienie wskaznika na pierwszy element
	const Stock * top = &stocks[0];
	for (st = 0; st < STKS; st++)
		top = &top->topval(stocks[st]);
	//teraz top wskazuje do najbardziej wartosciowych udzialow w portfelu
	std::cout << "\nNajbardziej wartosciowy pakiet:\n";
	top->show();
	system("pause");
	return 0;
}
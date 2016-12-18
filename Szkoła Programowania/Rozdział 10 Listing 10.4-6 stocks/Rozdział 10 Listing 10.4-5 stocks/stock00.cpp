#include<iostream>
#include"stock10.h"
Stock::Stock()
{
	std::cout << "Wywolano konstruktor domyslny\n";
	company = "bez nazwy";
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}
Stock::Stock(const std::string & co, long n, double pr)
{
	std::cout << "Wywolano konstruktor z argumentem\n";
	company = co;
	if (n < 0)
	{
		std::cout << "Liczba udzialow nie moze byc ujemna: "
			<< " ustalam wartosc na 0" << std::endl;
		shares = 0;
	}
	else
		shares = n;
	share_val = pr;
	set_tot();
}
Stock::~Stock()
{
	std::cout << "Wywolales destruktor: " << company << std::endl;
}
void Stock::buy(long num, double price)
{
	if (num < 0)
	{
		std::cout << "Liczba nabywanych tranzakcji nie moze byc ujemna."
			<< "Tranzakcja przerwana.\n";
	}
	else
	{
		shares += num;
		share_val = price;
		set_tot();
	}
}
void Stock::sell(long num, double price)
{
	using std::cout;
	if (num < 0)
	{
		std::cout << "Liczba nabywanych tranzakcji nie moze byc ujemna."
			<< "Tranzakcja przerwana.\n";
	}
	else if (num>shares)
	{
		cout << "Nie mozesz sprzedac wiecej udzialow, niz posiadasz! "
			<< "Tranzakcja przerwana.\n";
	}
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}
}
void Stock::update(double price)
{
	share_val = price;
	set_tot();
}
void Stock::show()
{
	using std::cout;
	using std::ios_base;
	//ustawienie formatu na #.###
	ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
	std::streamsize prec = cout.precision(3);
	std::cout << "Spolka: " << company
		<< " Liczba udzialow: " << shares << '\n'
		<< " Cena udzialu: " << share_val << " zl";
	//ustawienie formatu na #.##
	cout.precision(2);
	cout<< " Laczna wartosc udzialow: " << total_val << " zl" << '\n';
	//przywrocenie poprzedniego formatu
	cout.setf(orig, ios_base::floatfield);
	cout.precision(prec);
}
inline void Stock::set_tot()
{
	total_val = shares*share_val;
}
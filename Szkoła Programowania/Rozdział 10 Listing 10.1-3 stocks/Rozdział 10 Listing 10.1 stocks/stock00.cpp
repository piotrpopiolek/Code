#include<iostream>
#include"stocks00.cpp"
void Stock::acquicre(const std::string & co, long n, double pr)
{
	company = co;
	if (n < 0)
	{
		std::cout << "Liczba udzialow nie moze byc ujemna; "
			<< "ustalam liczbe udzialow w " << company << " na 0.\n";
		shares = 0;
	}
	else
		shares = n;
	share_val = pr;
	set_tot();
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
	std::cout << "Spolka: " << company
		<< " Liczba udzialow: " << shares << '\n'
		<< " Cena udzialu: " << share_val << " zl"
		<< " Laczna wartosc udzialow: " << total_val << " zl" << '\n';
}
inline void Stock::set_tot()
{
	total_val = shares*share_val;
}
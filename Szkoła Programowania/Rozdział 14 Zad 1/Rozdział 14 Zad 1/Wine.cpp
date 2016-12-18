#include "Wine.h"
int Wine::suma = 0;
Wine::Wine(const char * l, int y, const int yr[], const int bot[]) :label(l), count(y), Gatunek(ArrayInt(y), ArrayInt(y))
{
	for (int i = 0; i<count; i++)
	{
		Gatunek.first()[i] = yr[i];
		Gatunek.second()[i] = bot[i];
		suma += Gatunek.second()[i];
	}
}
Wine::Wine(const char * l, int y) :label(l), count(y), Gatunek(ArrayInt(y), ArrayInt(y))
{
}
void Wine::GetBottles()
{
	using std::cout;
	using std::cin;
	cout << "Podaj dane o winie " << label << " dla " << count << " rocznikow\n";
	for (int i = 0; i<count; i++)
	{
		cout << "Podaj rocznik ";
		cin >> Gatunek.first()[i];
		cout << "Podaj ilosc butelek ";
		cin >> Gatunek.second()[i];
		suma += Gatunek.second()[i];
	}
}
std::string & Wine::Label()
{
	return label;
}
void Wine::Show()const
{
	std::cout << "Wino " << label << "\n";
	std::cout << "Rocznik   Butelki\n";
	for (int i = 0; i < count; i++)
	{
		std::cout << Gatunek.first()[i];
		std::cout << "      ";
		std::cout << Gatunek.second()[i];
		std::cout << "\n";
	}
	std::cout << "Laczna suma butelek dla " << label << " wynosi " << Gatunek.second().sum() << std::endl;
}
void GetAll()
{
	std::cout << "Lacznie kolekcja zawiera " << Wine::suma << std::endl;
}
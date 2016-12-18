#include "lacksDma.h"
lacksDma::lacksDma(char * s, char * c, int r) :base(s, r)
{
	int i = 0;
	color = new char[strlen(c) + 1];
	while (i <= strlen(c))
	{
		color[i] = c[i];
		i++;
	}
}
lacksDma::lacksDma(const lacksDma & ob)
{
	cout << "Konstruktor kopiujacy klasy lackDma\n";
	int i = 0;
	color = new char[strlen(ob.color) + 1];
	while (i <= strlen(ob.color))
	{
		color[i] = ob.color[i];
		i++;
	}
	this->operator=(ob);
}
lacksDma & lacksDma::operator=(const lacksDma & ob)
{
	cout << "Operator przypisania klasy lacksDma\n";
	if (this == &ob)
		return *this;
	int i = 0;
	delete[] color;
	color = new char[strlen(ob.color) + 1];
	while (i<=strlen(ob.color))
	{
		color[i] = ob.color[i];
		i++;
	}
	base::operator=(ob);
	return *this;
}
lacksDma::~lacksDma()
{
	cout << "Destruktor klasy lacksDma\n";
	delete[] color;
}
void lacksDma::View()
{
	cout << "Tytul: " << getLabel() << endl;
	cout << "Ocena: " << getRating() << endl;
	cout << "Kolor: " << color << endl;
}

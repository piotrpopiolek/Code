#include "hasDma.h"
hasDma::hasDma(const char * s, char * sty, int r):base(s,r)
{
	int i = 0;
	style = new char[strlen(sty) + 1];
	while (i <= strlen(sty))
	{
		style[i] = sty[i];
		i++;
	}
}
hasDma::hasDma(const hasDma & ob)
{
	cout << "Konstruktor kopiujacy klasy hasDma\n";
	int i = 0;
	style = new char[strlen(ob.style) + 1];
	while (i <= strlen(ob.style))
	{
		style[i] = ob.style[i];
		i++;
	}
	this->operator=(ob);
}
hasDma & hasDma::operator=(const hasDma & ob)
{
	cout << "Operator przypisania klasy hasDma\n";
	if (this == &ob)
		return *this;
	base::operator=(ob);
	delete[] style;
	int i = 0;
	style = new char[strlen(ob.style + 1)];
	while (i <= strlen(ob.style))
	{
		style[i] = ob.style[i];
		i++;
	}
	return *this;
}
hasDma::~hasDma()
{
	cout << "Destruktor klasy hasDma\n";
	//delete[] style;
}
void hasDma::View()
{
	cout << "Tytul: " << getLabel() << endl;
	cout << "Ocena: " << getRating() << endl;
	cout << "Styl: " << style << endl;
}

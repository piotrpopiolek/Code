#include "Dma.h"
#include<cstring>
//metody klasy baseDma
using std::cout;
baseDma::baseDma(const char * l, int r)
{
	cout << "Konstruktor klasy baseDma\n";
	label = new char[std::strlen(l) + 1];
	int i = 0;
	while (i <= strlen(l))
	{
		label[i] = l[i];
		i++;
	}
	rating = r;
}
baseDma::baseDma(const baseDma & rs)
{
	cout << "Konstruktor kopiujacy klasy baseDma\n";
	label = new char[std::strlen(rs.label) + 1];
	int i = 0;
	while (i <= strlen(rs.label))
	{
		label[i] = rs.label[i];
		i++;
	}
	rating = rs.rating;
}
baseDma::~baseDma()
{
	delete[] label;
}
baseDma & baseDma::operator=(const baseDma & rs)
{
	if (this == &rs)
		return *this;
	delete[] label;
	label = new char[std::strlen(rs.label) + 1];
	int i = 0;
	while (i <= strlen(rs.label))
	{
		label[i] = rs.label[i];
		i++;
	}
	rating = rs.rating;
	return *this;
}
std::ostream & operator<<(std::ostream & os, const baseDma & rs)
{
	os << "Etykietka: " << rs.label << std::endl;
	os << "Klasa: " << rs.rating << std::endl;
	return os;
}
//metody klasy lacksDma
lacksDma::lacksDma(const char * c, const char * l, int r) :baseDma(l, r)
{
	cout << "Konstruktor klasy lacksDma\n";
	int i = 0;
	while (i < 39)
	{
		color[i] = c[i];
		i++;
	}
	color[39] = '\0';
}
lacksDma::lacksDma(const char * c, const baseDma & rs):baseDma(rs)
{
	int i = 0;
	while (i <COL_LEN-1)
	{
		color[i] = c[i];
		i++;
	}
	color[COL_LEN - 1] = '\0';
}
std::ostream & operator<<(std::ostream & os, const lacksDma & ls)
{
	os << (const baseDma &)ls;
	os << "Kolor: " << ls.color << std::endl;
	return os;
}
//metody klasyDma
hasDma::hasDma(const char * s, const char *l, int r) :baseDma(l, r)
{
	cout << "Konstruktor klasy hasDma\n";
	style = new char[std::strlen(s) + 1];
	int i = 0;
	while (i <= strlen(s))
	{
		style[i] = s[i];
		i++;
	}
}
hasDma::hasDma(const char * s, const baseDma & rs):baseDma(rs)
{
	style = new char[std::strlen(s) + 1];
	int i = 0;
	while (i <= strlen(s))
	{
		style[i] = s[i];
		i++;
	}
}
hasDma::hasDma(const hasDma & hs) :baseDma(hs)
{
	style = new char[std::strlen(hs.style) + 1];
	int i = 0;
	while (i <= strlen(hs.style))
	{
		style[i] = hs.style[i];
		i++;
	}
}
hasDma::~hasDma()
{
	delete[] style;
}
hasDma & hasDma::operator=(const hasDma & hs)
{
	if (this == &hs)
		return *this;
	baseDma::operator=(hs); //kopiuje dane klasy bazowej
	delete [] style;
	style = new char[std::strlen(hs.style) + 1];
	int i = 0;
	while (i <= strlen(hs.style))
	{
		style[i] = hs.style[i];
		i++;
	}
	return *this;
}
std::ostream & operator<<(std::ostream & os, const hasDma & hs)
{
	os << (const baseDma &)hs;
	os << "Styl: " << hs.style << std::endl;
	return os;
}
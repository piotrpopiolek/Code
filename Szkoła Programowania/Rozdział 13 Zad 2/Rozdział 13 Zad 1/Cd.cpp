#include "Cd.h"
#include<cstring>
#include<iostream>
using std::cout;
using std::endl;
Cd::Cd(char * s1, char * s2, int n, double x):selections(n),playtime(x)
{
	int i = 0;
	performers = new char[strlen(s1) + 1];
	while (i <= strlen(s1))
	{
		performers[i] = s1[i];
		i++;
	}
	i = 0;
	label=new char[strlen(s2) + 1];
	while (i <= strlen(s2))
	{
		label[i] = s2[i];
		i++;
	}
}
Cd::Cd(const Cd & d)
{
	int i = 0;
	performers= new char[strlen(d.performers) + 1];
	while (i <= strlen(d.performers))
	{
		performers[i] = d.performers[i];
		i++;
	}
	i = 0;
	label= new char[strlen(d.label) + 1];
	while (i <= strlen(d.label))
	{
		label[i] = d.label[i];
		i++;
	}
	selections = d.selections;
	playtime = d.playtime;
}
Cd::~Cd()
{
	cout << "Destruktor klasy Cd\n";
	Report();
	delete[] performers;
	delete[] label;
}
void Cd::Report() const
{
	cout << endl;
	cout << "Wykonawca: " << performers << endl;
	cout << "Tytul: " << label << endl;
	cout << "Ilosc utworow: " << selections << endl;
	cout << "Dlugosc plyty: " << playtime << endl;
}
Cd & Cd::operator=(const Cd & d)
{
	if (this == &d)
		return *this;
	int i = 0;
	delete[] performers;
	performers = new char[strlen(d.performers) + 1];
	while (i <= strlen(d.performers))
	{
		performers[i] = d.performers[i];
		i++;
	}
	i = 0;
	delete[] label;
	label = new char[strlen(d.label) + 1];
	while (i <= strlen(d.label))
	{
		label[i] = d.label[i];
		i++;
	}
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}
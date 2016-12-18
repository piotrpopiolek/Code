#include "Classic.h"
#include<cstring>
#include<iostream>
using std::endl;
using std::cout;
Classic::Classic(char * s1, char * s2, char * s3, int n, double x):Cd(s1,s2,n,x)
{
	int i = 0;
	song= new char[strlen(s3) + 1];
	while (i <= strlen(s3))
	{
		song[i] = s3[i];
		i++;
	}
}
Classic::Classic(const Classic & d):Cd(d)//wywoluje konstruktor kopiujacy klasy bazowej
{
	int i = 0;
	song= new char[strlen(d.song) + 1];
	while (i <= strlen(d.song))
	{
		song[i] = d.song[i];
		i++;
	}
}
Classic::Classic(char * s1, const Cd & d):Cd(d)
{
	int i = 0;
	song=new char[strlen(s1) + 1];
	while (i <= strlen(s1))
	{
		song[i] = s1[i];
		i++;
	}
}
Classic::~Classic()
{
	cout << "Destruktor klasy Classic\n";
	Report();
	delete[] song;
}
void Classic::Report() const
{
	Cd::Report();
	cout << "Najlepsza piosenka: " << song << endl;
	cout << endl;
}
Classic & Classic::operator=(const Classic & d)
{
	if (this == &d)
		return *this;
	Cd::operator=(d);
	int i = 0;
	delete[] song;
	song = new char[strlen(d.song) + 1];
	while (i <= strlen(d.song))
	{
		song[i] = d.song[i];
		i++;
	}
	return *this;
}
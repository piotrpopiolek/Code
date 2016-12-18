#include "base.h"
base::base(const char * s1, int r)
{
	int i = 0;
	label = new char[strlen(s1) + 1];
	while (i <= strlen(s1))
	{
		label[i] = s1[i];
		i++;
	}
	rating = r;
}
base::base(const base & rs)
{
	cout << "Konstruktor kopiujacy klasy base\n";
	int i = 0;
	label = new char[strlen(rs.label) + 1];
	while (i <= strlen(rs.label))
	{
		label[i] = rs.label[i];
		i++;
	}
	rating = rs.rating;
}
base & base::operator=(const base & ob)
{
	cout << "Operator przypisania klasy base\n";
	if (this == &ob)
		return *this;
	rating = ob.rating;
	int i = 0;
	delete[] label;
	label = new char[strlen(ob.label) + 1];
	while (i <= strlen(ob.label))
	{
		label[i] = ob.label[i];
		i++;
	}
	return *this;
}
base::~base()
{
	cout << "Destruktor klasy base\n";
	delete[] label;
}
const char * base::getLabel() const
{
	return label;
}
const int base::getRating() const
{
	return rating;
}

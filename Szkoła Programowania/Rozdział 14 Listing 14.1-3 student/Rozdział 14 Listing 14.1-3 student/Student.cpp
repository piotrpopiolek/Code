#include "Student.h"
using std::ostream;
using std::endl;
using std::istream;
using std::string;
double Student::Average() const
{
	if (scores.size() > 0)
		return scores.sum() / scores.size();
	else
		return 0;
}
const string & Student::Name() const
{
	return name;
}
double & Student::operator[](int i)
{
	return scores[i]; // uzywa funkcji valarray<double>::operator[]()
}
double Student::operator[](int i) const
{
	return scores[i];
}
ostream & Student::arr_out(std::ostream & os) const
{
	int i;
	int lim = scores.size();
	if (lim > 0)
	{
		for (i = 0; i < lim; i++)
		{
			os << scores[i] << " ";
			if (i % 5 == 4)
				os << endl;
		}
		if (i % 5 != 0)
			os << endl;
	}
	else
		os << " tablica jest pusta ";
	return os;
}
istream & operator>>(std::istream & is, Student & stu)
{
	is >> stu.name;
	return is;
}
istream & getline(std::istream & is, Student & stu)
{
	std::getline(is, stu.name);
	return is;
}
ostream & operator<<(std::ostream & os, const Student & stu)
{
	os << "Wyniki " << stu.name << ":\n";
	stu.arr_out(os);
	return os;
}
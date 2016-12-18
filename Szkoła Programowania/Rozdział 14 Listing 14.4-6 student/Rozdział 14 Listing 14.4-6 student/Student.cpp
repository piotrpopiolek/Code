#include "Student.h"
using std::ostream;
using std::endl;
using std::istream;
using std::string;
double Student::Average() const
{
	if (ArrayDb::size() > 0)
		return ArrayDb::sum() / ArrayDb::size();
	else
		return 0;
}
const string & Student::Name() const
{
	return (const string &)*this;
}
double & Student::operator[](int i)
{
	return ArrayDb::operator[](i); // uzywa funkcji ArrayDb::operator[]()
}
double Student::operator[](int i) const
{
	return ArrayDb::operator[](i);
}
ostream & Student::arr_out(std::ostream & os) const
{
	int i;
	int lim = ArrayDb::size();
	if (lim > 0)
	{
		for (i = 0; i < lim; i++)
		{
			os << ArrayDb::operator[](i) << " ";
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
	is >> (string &)stu;
	return is;
}
istream & getline(std::istream & is, Student & stu)
{
	std::getline(is, (string&)stu);
	return is;
}
ostream & operator<<(std::ostream & os, const Student & stu)
{
	os << "Wyniki " << (const string &)stu << ":\n";
	stu.arr_out(os);
	return os;
}
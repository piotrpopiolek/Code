#include "Student.h"
Student::Student()
{
	imie = "imie";
	nazwisko = "nazwisko";
	next = NULL;
}
Student::Student(string i,string na, int in, Student* ne) : imie(i),nazwisko(na),index(in),next(ne)
{

}
Student::~Student()
{
}
ostream & operator<<(ostream & os, const Student & ob)
{
	os << ob.imie << endl;
	os << ob.nazwisko << endl;
	os << ob.index << endl;
	return os;
}
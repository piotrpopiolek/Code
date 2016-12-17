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

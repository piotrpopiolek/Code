#include<iostream>
#include<string>
using namespace std;
struct Student
{
	string imie;
	string nazwisko;
	string data_urodzenia;
	int index;
};
void display(Student &s);
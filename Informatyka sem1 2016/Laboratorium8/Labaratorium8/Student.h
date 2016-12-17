#pragma once
#include<string>
#include<iostream>
using namespace std;
class Student
{
	Student* next;
	string imie;
	string nazwisko;
	int index;
public:
	Student();
	Student::Student(string i, string na, int in, Student* ne);
	~Student();
	friend class Lista;
};


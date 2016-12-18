#pragma once
#ifndef STUDENT_H_
#define STUDENT_H_
#include<iostream>
#include<string>
#include<valarray>
using std::string;
class Student:private string,private std::valarray<double>
{
	typedef std::valarray<double> ArrayDb;
	std::ostream & arr_out(std::ostream & os) const;
public:
	Student():string("Brak"),ArrayDb(){}
	explicit Student(const string & s):string(s),ArrayDb(){}
	explicit Student(int n):string("brak"),ArrayDb(n){}
	Student(const string & s, int n):string(s),ArrayDb(n){}
	Student(const string & s,const ArrayDb & a):string(s),ArrayDb(a){}
	Student(const char * str,const double * pd, int n):string(str),ArrayDb(pd,n){}
	~Student(){}
	double Average() const;
	const string & Name() const;
	double & operator[](int i);
	double operator[](int i) const;
	friend std::istream & operator>>(std::istream & is, Student & stu);
	friend std::istream & getline(std::istream & is, Student & stu);
	friend std::ostream & operator<<(std::ostream & os, const Student & stu);
};
#endif // !STUDENT_H_

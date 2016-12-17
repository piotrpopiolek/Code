#pragma once
#include<string>
#include<iostream>
#include<fstream>
#include"Student.h"
using namespace std;
class Lista
{
	Student* wskaznik;
	
public:
	void read();
	void save();
	Lista();
	~Lista();
	void add(string i,string na, int in);
	void print();
	bool search(int n);
	bool delete_student(int n);
	void delete_all();
};


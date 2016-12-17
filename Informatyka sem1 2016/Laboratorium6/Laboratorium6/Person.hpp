#include<string>
#include<iostream>
using namespace std;
#ifndef Person_H
struct Person
{
	string firstName;
	string lastName;
	unsigned short age;
	char gender;
};
Person createPerson();
void display(const Person &P);
#endif
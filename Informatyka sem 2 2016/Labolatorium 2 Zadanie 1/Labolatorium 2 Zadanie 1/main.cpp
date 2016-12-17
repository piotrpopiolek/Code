#include<iostream>
#include"VerboseObject.h"
using namespace std;
int main()
{
	VerboseObject O1("Pierwszy");
	O1.Metod();
	O1.~VerboseObject();
	system("pause");
	return 0;
}
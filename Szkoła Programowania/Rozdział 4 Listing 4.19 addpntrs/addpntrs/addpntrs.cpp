#include<iostream>
int main()
{
	using namespace std;
	double wages[3] = { 10000.0,20000.0,30000.0 };
	short stacks[3] = { 3,2,1 };
	//oto dwa sposoby okreslania adresu tablicy
	double* pw = wages; //nazwa tablicy=adres
	short* ps = &stacks[0]; //mozna tez uzyc operatora adresu
	//element tablicy
	cout << "pw = " << pw << ", *pw = " << *pw << endl;
	pw = pw + 1;
	cout << "dodaj do wskaznika pw 1:\n";
	cout << "pw = " << pw << ", *pw = " << *pw << "\n\n";
	cout << "ps = " << ps << ", *ps = " << *ps << endl;
	ps = ps + 1;
	cout << "dodaj do wskaznika ps 1:\n";
	cout << "ps = " << ps << ", *ps = " << *ps << "\n\n";
	cout << "dostep do dwoch elementow, zapis tablicowy\n";
	cout << "stacks[0] = " << stacks[0] << ", stacks[1] = " << stacks[1] << endl;
	cout << "dostep do dwoch elementow, zapis wskaznikowy\n";
	cout << "*stacks = " << *stacks << ", *(stacks + 1) = " << *(stacks + 1) << endl;
	cout << sizeof(wages) << " = wielkosc tablicy wages\n";
	cout << sizeof(pw) << " = wielkosc wskaznika pw\n";
	system("pause");
	return 0;
}
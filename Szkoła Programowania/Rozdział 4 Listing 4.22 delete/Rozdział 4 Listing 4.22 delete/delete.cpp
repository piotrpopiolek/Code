#include<iostream>
#include<cstring>
using namespace std;
char* getname(void);
int main()
{
	char* name;
	name = getname();
	cout << name << " pod adresem " << (int*)name << "\n";
	delete [] name;
	name = getname();
	cout << name << " pod adresem " << (int*)name << "\n";
	delete [] name;
	system("pause");
	return 0;
}
char* getname()
{
	char temp[80];
	cout << "Podaj nazwisko: ";
	cin >> temp;
	char* pn = new char[strlen(temp) + 1];
	strcpy(pn, temp);
	return pn;
}
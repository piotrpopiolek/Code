#include<iostream>
#include<string>
using namespace std;
class Person
{
	static const int LIMIT = 256;
	string lname;
	char fname[LIMIT];
public:
	Person()
	{
		lname = "";
		fname[0] = '\0';
	}
	Person(const string& ln, const char* fn = "HejTy")
	{
		lname = ln;
		strcpy(fname, fn);
	}
	void Show() const;
	void FormalShow() const;
};
int main()
{
	Person one;
	Person two("Staszek");
	Person three("Jacek", "Placek");
	one.Show();
	one.FormalShow();
	two.Show();
	two.FormalShow();
	three.Show();
	three.FormalShow();
	return 0;
}
void Person::Show() const
{
	cout << "Imie: " << fname << endl;
	cout << "Nazwisko: " << lname << endl;
}
void Person::FormalShow() const
{
	cout << "Nazwisko: " << lname << endl;
	cout << "Imie: " << fname << endl;
}

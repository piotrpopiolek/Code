#include<iostream>
using namespace std;
const int SLEN = 30;
struct student
{
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};
int getinfo(student pa[], int n);
void display1(student st);
void display2(const student * ps);
void display3(const student pa[], int n);
int main()
{
	cout << "Podaj wielkosc grupy: ";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n')
		continue;
	student * ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for (int i = 0; i < entered; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	delete[] ptr_stu;
	cout << "Gotowe\n";
	system("pause");
	return 0;
	system("pause");
	return 0;
}
int getinfo(student pa[], int n)
{
	int i = 0;
	for (; i < n; i++)
	{
		cout << "Podaj imie: ";
		cin >> pa[i].fullname;
		cout << "Podaj hobby: ";
		cin >> pa[i].hobby;
		cout << "Podaj level: ";
		cin >> pa[i].ooplevel;
		cout << endl;
	}
	return i;
}
void display1(student st)
{
	cout << st.fullname << " " << st.hobby << " " << st.ooplevel << endl;
	cout << endl;
}
void display2(const student * ps)
{
	cout << ps->fullname << " " << ps->hobby << " " << ps->ooplevel << endl;
	cout << endl;
}
void display3(const student pa[], int n)
{
	for (int i = 0; i < n; i++)
		cout << pa[i].fullname << " " << pa[i].hobby << " " << pa[i].ooplevel << endl;
}
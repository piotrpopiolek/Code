#include<iostream>
#include"Student.h"
using std::cin;
using std::cout;
using std::endl;
void set(Student & sa, int n);
const int pupils = 3;
const int quizzes = 5;
int main()
{
	Student ada[pupils] = { Student(quizzes),Student(quizzes),Student(quizzes) };
	int i;
	for (i = 0; i < pupils; ++i)
		set(ada[i], quizzes);
	cout << "\nLista studentow:\n";
	for (i = 0; i < pupils; ++i)
		cout << ada[i].Name() << endl;
	cout << "\nWyniki:";
	for (i = 0; i < pupils; ++i)
	{
		cout << endl << ada[i];
		cout << "srednia: " << ada[i].Average() << endl;
	}
	cout << "Gotowe\n";
	system("pause");
	return 0;
}
void set(Student & sa, int n)
{
	cout << "Podaj imie i nazwisko studenta: ";
	getline(cin, sa);
	cout << "Podaj " << n << " wynikow testow:\n";
	for (int i = 0; i < n; i++)
		cin >> sa[i];
	while (cin.get() != '\n')
		continue;
}
#include<iostream>
template <typename T> //A
void ShowArray(T arr[], int n);
template <typename T> //B
void ShowArray(T * arr[], int n);
struct debts
{
	char name[50];
	double amount;
};
int main()
{
	using namespace std;
	int things[6] = { 13,31,103,301,310,130 };
	struct debts mr_E[3] =
	{
		{"Ima Wolfe",2400.0},
		{"Ura Foxe",1300.0},
		{"Iby Stout",1800.0}
	};
	double * pd[3];
	//ustawienie wskaznikow na pola amount struktur z tablicy Mr_E
	for (int i = 0; i < 3; i++)
		pd[i] = &mr_E[i].amount;
	cout << "Wyliczenie rzeczy pane E.:\n";
	ShowArray(things, 6); //uzywamy szablonu A
	cout << "Wyliczenie dlugow pane E.:\n";
	ShowArray(pd, 3); //uzywamy szablonu B (bardziej wyspecjalizowanego)
	system("pause");
	return 0;
}
template <typename T>
void ShowArray(T arr[], int n)
{
	using namespace std;
	cout << "Szablon A\n";
	for (int i = 0; i < n; i++)
		cout << arr[i] << ' ';
	cout << endl;
}
template <typename T>
void ShowArray(T * arr[], int n)
{
	using namespace std;
	cout << "Szablon B\n";
	for (int i = 0; i < n; i++)
		cout << *arr[i] << ' ';
	cout << endl;
}
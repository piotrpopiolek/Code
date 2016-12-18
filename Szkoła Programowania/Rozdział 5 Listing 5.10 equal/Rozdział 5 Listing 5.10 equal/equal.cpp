#include<iostream>
int main()
{
	using namespace std;
	int quizscores[10] =
	{ 20,20,20,20,20,19,20,18,20,20 };
	int i;
	cout << "Bezblednie" << endl;
	for (i = 0; quizscores[i] == 20; i++)
	{
		cout << "test " << i << " ma wartosc 20\n";
	}
	//blad przypisuje quizscores[i] = 20 w forze zamiast sprawdzac
	for (i = 0; quizscores[i] = 20; i++)
	{
		cout << "test " << i << " ma wartosc 20\n";
	}
	system("pause");
	return 0;
}
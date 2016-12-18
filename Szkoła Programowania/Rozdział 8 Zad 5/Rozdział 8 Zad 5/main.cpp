#include<iostream>
using namespace std;
template<typename T>
T max5(T Tab[]);
template<typename T>
void wpisz(T Tab[]);
int main()
{
	int Tablica[5];
	double Tablica2[5];
	wpisz(Tablica);
	cout << "Max to: " << max5(Tablica) << endl;
	wpisz(Tablica2);
	cout << "Max to: " << max5(Tablica2) << endl;
	system("pause");
	return 0;
}
template<typename T>
T max5(T Tab[])
{
	T m = Tab[0];
	for (int i = 1; i < 5; i++)
	{
		if (Tab[i] > m)
			m = Tab[i];
	}
	return m;
}
template<typename T>
void wpisz(T Tab[])
{
	for (int i = 0; i < 5; i++)
	{
		cin >> Tab[i];
	}
}
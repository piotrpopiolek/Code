#include<iostream>
#include<cstring>
#include<string>
#include<array>
using namespace std;
template<typename T>
T max5(T Tab[],int n);
template<typename T>
void wpisz(T Tab[],int n);
void wpisz(char * Tab[], int n);
char * max5(char * Tab[], int n);
int main()
{
	const int rozmiar=4;
	int Tablica[rozmiar];
	double Tablica2[rozmiar];
	char * Tablica3[rozmiar];
	//wpisz(Tablica,rozmiar);
	//cout << "Max to: " << max5(Tablica, rozmiar) << endl;
	//wpisz(Tablica2,rozmiar);
	//cout << "Max to: " << max5(Tablica2, rozmiar) << endl;
	wpisz(Tablica3, rozmiar);
	cout << "Max to: " << max5(Tablica3, rozmiar) << endl;
	system("pause");
	return 0;
}
template<typename T>
T max5(T Tab[],int n)
{
	T m = Tab[0];
	for (int i = 1; i < n; i++)
	{
		if (Tab[i] > m)
			m = Tab[i];
	}
	return m;
}
template<typename T>
void wpisz(T Tab[],int n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> Tab[i];
	}
}
void wpisz(char * Tab[], int n)
{
	const int rozmiar = 1000;
	for (int i = 0; i < n; i++)
	{
		char temp[rozmiar];
		cin >> temp;
		Tab[i] = new char[strlen(temp) + 1];
		for (int j = 0; j<strlen(temp) + 1; j++)
			Tab[i][j] = temp[j];
	}
}
char * max5(char * Tab[], int n)
{
	char * m = Tab[0];
	for (int i = 0; i < n; i++)
	{
		if (strlen(Tab[i]) > strlen(m))
			m = Tab[i];
	}
	return m;
}
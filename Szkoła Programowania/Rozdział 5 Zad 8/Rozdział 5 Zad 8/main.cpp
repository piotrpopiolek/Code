#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
int main()
{
	//program dziala prawidlowo z wyjatkiem gdy podajemy same biale znaki nie potrzebnie zlicza jako slowa
	const int limit_znakow = 50;
	char slowo[limit_znakow];
	int licznik = 0;
	char znak='!';
	int i = 0;
	cout << "Podawaj slowa (kiedy skonczysz, napisz gotowe)" << endl;
	while (strcmp(slowo, "gotowe"))
	{
		cin.get(znak);
		if (isspace(znak))//zwraca true jesli argument jest bialym znakiem
		{
			slowo[i] = '\0';
			i = 0;
			licznik++;
			continue;
		}
		slowo[i] = znak;
		i++;
	};
	cout << "Podano " << licznik << " slow" << endl;
	system("pause");
	return 0;
}
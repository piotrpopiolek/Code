#include<iostream>
#include<string>
#include<algorithm>
int main()
{
	using namespace std;
	string letters;
	cout << "Podaj zestaw liter (koniec, aby zakonczyc): ";
	int i = 1;
	while (cin >> letters && letters != "koniec")
	{
		cout << "Permutacje liter " << letters << endl;
		sort(letters.begin(), letters.end());
		cout << letters << endl;
		while (next_permutation(letters.begin(), letters.end()))
		{
			cout << letters << endl;
			i++;
		}
		cout << "Liczba permutacji: " << i << endl;
		i = 1;
		cout << "Podaj kolejny zestaw liter (koniec, aby zakonczyc): ";
	}
	system("pause");
	return 0;
}
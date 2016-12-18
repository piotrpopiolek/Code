#include<iostream>
const int Max = 5;
int main()
{
	using namespace std;
	double fish[Max];
	cout << "Podaj wage swoich ryb.\n";
	cout << "Maksymalnie mozna podac " << Max << " ryb <q konczy>.\n";
	cout << "ryba1 .: ";
	int i = 0;
	while (i < Max && cin >> fish[i])
	{
		if (++i < Max)
			cout << "ryba " << i + 1 << ".: ";
	}
	double total = 0.0;
	for (int j = 0; j < i; j++)
		total += fish[j];
	if (i == 0)
		cout << "Nie ma zadnych ryb\n";
	else
		cout << total / i << " = srednia waga " << i << " ryb\n";
	system("pause");
	return 0;
}
#include<iostream>
#include<string>
#include<vector>
const int NUM = 5;
int main()
{
	using std::vector;
	using std::string;
	using std::cin;
	using std::cout;
	using std::endl;
	vector<int> ratings(NUM);
	vector<string> titles(NUM);
	cout << "Postepuj dokladnie wedlug instrukcji. Wpisz\n" << NUM << " tytulow ksiazek oraz ich oceny na skali 0-10.\n";
	int i;
	for (i = 0; i < NUM; i++)
	{
		cout << "Wpisz tytul numer " << i + 1 << ": ";
		getline(cin, titles[i]);
		cout << "Wpisz ocene na skali 0-10: ";
		cin >> ratings[i];
		cin.get();
	}
	cout << "Dziekuje. Wpisales nastepujace dane:\n " << "Ocena\tKsiazka\n";
	for (int i = 0; i < NUM; i++)
	{
		cout << ratings[i] << "\t" << titles[i] << endl;
	}
	system("pause");
	return 0;
}
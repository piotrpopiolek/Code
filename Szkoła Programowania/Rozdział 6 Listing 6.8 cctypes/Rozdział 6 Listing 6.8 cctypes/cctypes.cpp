#include<iostream>
#include<cctype>//prototypy funkcji obslugi znakow
int main()
{
	using namespace std;
	cout << "Podaj tekst do analizy, zakoncz go,"
		" wpisujac znak @.\n";
	char ch;
	int whitespace = 0;
	int digits = 0;
	int chars = 0;
	int punct = 0;
	int others = 0;
	cin.get(ch);
	while (ch != '@')
	{
		if (isalpha(ch))//czy to litera
			chars++;
		else if (isspace(ch))//czy to bialy znak
			whitespace++;
		else if (isdigit(ch))//czy to cyfra
			digits++;
		else if (ispunct(ch))//czy to znak przestankowy
			punct++;
		else
			others++;
		cin.get(ch);
		cout << chars << " liter, " << whitespace << " bialych znakow, " << digits << " cyfr, " << punct << " znakow przestankowych, " << others << " innych znakow.\n";
	}
	system("pause");
	return 0;
}
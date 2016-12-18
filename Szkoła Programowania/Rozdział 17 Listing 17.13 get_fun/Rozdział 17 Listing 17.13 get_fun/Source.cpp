#include<iostream>
const int Limit = 255;
int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	char input[Limit];
	cout << "Wprowadz lancuch znakow do funkcji getline():\n ";
	cin.getline(input, Limit, '$');
	cout << "Oto Twoje dane:\n";
	cout << input << "\nKoniec etapu 1\n";
	char ch;
	cin.get(ch);
	cout << "Nastepny znak wejsciowy to " << ch << endl;
	if (ch != '\n')
		cin.ignore(Limit, '\n'); //pomin reszte wiersza
	cout << "Wprowadz lancuch znakow do funkcji get():\n";
	cin.get(input, Limit, '$');
	cout << "Oto Twoje dane:\n";
	cout << input << "\nKoniec etapu 2\n";
	cin.get(ch);
	cout << "Nastepny znak wejsciowy to " << ch << endl;
	system("pause");
	return 0;
}
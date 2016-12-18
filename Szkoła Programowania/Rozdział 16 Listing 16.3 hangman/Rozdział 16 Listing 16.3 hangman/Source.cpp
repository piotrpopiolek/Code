#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<cctype>
using std::string;
const int NUM = 26;
const string wordlist[NUM] =
{
	"agrest","bigos","czara","drewno","ekipa","figura","gorycz","hiena","iskra",
	"junior","krata","lizak","miska","nurek","obuwie","pisak","rozum","smalec","taryfa",
	"umiar","video","welon","yeti","zalew","zimno","zapas"
};
int main()
{
	using std::cout;
	using std::cin;
	using std::tolower;
	using std::endl;
	std::srand(std::time(NULL));
	char play;
	cout << "Czy chcesz zagrac w gre slowna? <t/n> ";
	cin >> play;
	play = tolower(play);
	while (play == 't')
	{
		string target = wordlist[std::rand() % NUM];
		int length = target.length();
		string attempt(length, '-');
		string badchars;
		int guesses = 6;
		cout << "Zgadnij moje sekretne slowo. Ma ono " << length << " liter. Mozesz zgadywac\n";
		cout << "po jednej literze na raz. Mozesz pomylic sie " << guesses << " razy.\n";
		cout << "Twoje slowo: " << attempt << endl;
		while (guesses > 0 && attempt != target)
		{
			char letter;
			cout << "Zgadnij litere: ";
			cin >> letter;
			if (badchars.find(letter) != string::npos || attempt.find(letter) != string::npos)
			{
				cout << "Ta litera juz byla. Sprobuj innej.\n";
				continue;
			}
			int loc = target.find(letter);
			if (loc == string::npos)
			{
				cout << "Nie ma takiej litery!\n";
				--guesses;
				badchars += letter; //dodaje do ciagu
			}
			else
			{
				cout << "Poprawna litera!\n";
				attempt[loc] = letter;
				loc = target.find(letter, loc + 1); //sprawdza czy litera nie pojawia sie ponownie w innym miejscu
				while (loc != string::npos)
				{
					attempt[loc] = letter;
					loc = target.find(letter, loc + 1);
				}
			}
			cout << "Twoje slowo: " << attempt << endl;
			if (attempt != target)
			{
				if (badchars.length() > 0)
					cout << "Niepoprawne litery: " << badchars << endl;
				cout << "Mozesz pomylic sie jeszcze " << guesses << " razy\n";
			}
		}
		if (guesses > 0)
			cout << "To juz cale slowo!\n";
		else
			cout << "Niestety, to slowo to: " << target << ".\n";
		cout << "Czy chcesz zagrac jeszcze raz? <t/n>";
		cin >> play;
		play = tolower(play);
	}
	system("pause");
	return 0;
}
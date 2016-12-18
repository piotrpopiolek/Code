#include "Client.h"
using std::string;
using std::cout;
using std::endl;
using std::cin;
string Menu();
Client myClient("127.0.0.1", 110);
vector<string> Zalaczniki;
void ReadZalaczniki(vector<string>& Tablica);
int main()
{
	if (!myClient.Connect()) 
	{
		std::cout << "Blad polaczenia z serwerem ... " << std::endl;
		system("pause");
		return 1;
	}
	std::string userinput; 
	while (true)
	{
		userinput = Menu();
		if (!myClient.SendString(userinput)) 
			break; 
		Sleep(5000);
	}
	system("pause");
	return 0;
}
string Menu()
{
	string command;
	cout << "Wybiez co chcesz zrobic." << endl;
	cout << "1. Podaj login" << endl;
	cout << "2. Podaj haslo" << endl;
	cout << "3. Pokaz skrzynke pocztowa" << endl;
	cout << "4. Pokaz wybrana wiadomosc" << endl;
	cout << "5. Sortuj wiadomosci" << endl;
	cout << "6. Skasuj wiadomosc" << endl;
	cout << "7. Zakoncz sesje" << endl;
	int choice; cin >> choice;
	switch (choice)
	{
	case 1:
	{
		string login;
		cout << "Podaj login: ";
		cin >> login;
		command = "user";
		command += " " + login + " ";
		break;
	}
	case 2:
	{
		string haslo;
		cout << "Podaj haslo: ";
		cin >> haslo;
		command = "pass";
		command += " " + haslo + " ";
		system("cls");
		break;
	}
	case 3:
	{
		command = "list";
		system("cls");
		break;
	}
	case 4:
	{
		cout << "Podaj numer wiadomosci ktora chcesz wyswietlic: ";
		string numer; cin >> numer;
		command = "retr " + numer + " ";
		ReadZalaczniki(Zalaczniki);
		for each (string i in Zalaczniki)
		{
			cout << i << endl;
			myClient.RequestFile(i);
		}
		system("cls");
		break;
	}
	case 5:
	{
		cout << "Wedlug jakiego parametru chcesz posortowac wiadomosci?" << endl;
		cout << "1. Temat\t2. Data\t3. Nadawca" << endl;
		string numer; cin >> numer;
		command = "sort " + numer + " ";
		system("cls");
		break;
	}
	case 6:
	{
		cout << "Podaj numer wiadomosci ktora chcesz usunac: ";
		string numer; cin >> numer;
		command = "dele " + numer + " ";
		system("cls");
		break;
	}
	case 7:
	{
		command = "quit ";
		break;
	}
	default:
		system("cls");
		cout << "Nie ma takiej komendy" << endl;
		break;
	}
	return command;
}
void ReadZalaczniki(vector<string>& Tablica)
{
	ifstream odczyt; 
	string nazwa = "Zalaczniki.txt";
	odczyt.open(nazwa);
	if (!odczyt.is_open()) 
	{
		cout << "Nie udalo sie otworzyc pliku\n";
		system("pause");
		exit(EXIT_FAILURE);
	}
	string i;
	while (odczyt >> i)
	{
		Tablica.push_back(i);
	}
	odczyt.close();
}
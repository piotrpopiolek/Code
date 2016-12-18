#include<iostream>
#include<sstream>
#include<string>
int main()
{
	using namespace std;
	ostringstream outstr; //zarzadza strumieniem typu string
	string hdisk;
	cout << "Jak sie nazywa Twoj dysk twardy? ";
	getline(cin, hdisk);
	int cap;
	cout << "Jaka jest jego pojemnosc w GB? ";
	cin >> cap;
	//zapisz informacje sformatowane w strumieniu typu string
	outstr << "Dysk twardy " << hdisk << " ma pojemnosc " << cap << " gigabitow.\n";
	string result = outstr.str(); //zapis wynik
	cout << result; //wyswietl zawartosc
	system("pause");
	return 0;
}
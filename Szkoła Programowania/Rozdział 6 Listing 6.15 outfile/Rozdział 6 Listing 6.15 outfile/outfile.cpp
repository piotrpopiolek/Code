#include<iostream>
#include<fstream>
int main()
{
	using namespace std;
	char automobile[50];
	int year;
	double a_price, d_price;
	ofstream outFile;
	outFile.open("carinfo.txt");
	cout << "Podaj marke i model auta: ";
	cin.getline(automobile, 50);
	cout << "Podaj rok produkcji: ";
	cin >> year;
	cout << "Podaj cene wyjsciowa: ";
	cin >> a_price;
	d_price = 0.913*a_price;
	//konsola
	cout << fixed;
	cout.precision(2); //precyzja wyniku
	cout.setf(ios_base::showpoint);
	cout << "Marka i model: " << automobile << endl;
	cout << "Rok: " << year << endl;
	cout << "Cena wywolawcza: " << a_price << endl;
	cout << "Cena biezaca: " << d_price << endl;
	//plik
	outFile << fixed;
	outFile.precision(2);
	outFile.setf(ios_base::showpoint);
	outFile << "Marka i model: " << automobile << endl;
	outFile << "Rok: " << year << endl;
	outFile << "Cena wywolawcza: " << a_price << endl;
	outFile << "Cena biezaca: " << d_price << endl;
	outFile.close();
	system("pause");
	return 0;
}
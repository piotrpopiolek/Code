#include <iostream>
#include <vector>
#include <random>
#include <fstream>
#include <conio.h>
//#include "complex.h"
using namespace std;


float random() {
	static default_random_engine e{};
	uniform_real_distribution<float> d;
	return d(e);
}

void zadanie1() {

	cout << "Podaj n: ";
	int n;
	cin >> n;
	vector<float> vec;

	for (int i = 0; i < n; i++) {
		vec.push_back(random());
	}

	for (auto it : vec) {
		cout << it << " ";
	}

	ofstream output;
	string filename = "zadanie1.txt";
	output.open(filename);
	if (output) {
		for (auto it : vec) {
			output << it << " ";
		}
	}
	output.close();
	string filename2 = "zadanie1_bin.txt";
	ofstream output_bin(filename2, ios::binary);
	if (output_bin) {
		for (auto it : vec)
			output_bin.write(reinterpret_cast<char*> (&it), sizeof(it));
	}
	output_bin.close();
	//Zapis w trybie binarnym zajmuje mniej miejsca i jest nieczytelny
}

void zadanie2() {

	vector<int> int_vec;
	vector<float> float_vec;
	vector<int> int_vec_2;
	vector<float> float_vec_2;

	//Wczytywanie pliku binarnego
	string filename = "zadanie1_bin.txt";
	ifstream input(filename, ios::binary);
	if (input) {
		int i;
		while (input.read(reinterpret_cast<char*> (&i), sizeof(i)))
			int_vec.push_back(i);
	}
	input.close();

	ifstream input2(filename, ios::binary);
	if (input2) {
		float i;
		while (input2.read(reinterpret_cast<char*> (&i), sizeof(i)))
			float_vec.push_back(i);
	}
	input2.close();

	cout << "Wypisywanie pliku binarnego " << endl;

	cout << "\nWektor typu int: ";
	for (auto it : int_vec) {
		cout << it << " | ";
	}

	cout << "\nWektor typu float: ";
	for (auto it : float_vec) {
		cout << it << " | ";
	}

	//Wczytywanie pliku tekstowego
	string filename2 = "zadanie1.txt";
	ifstream input3(filename, ios::binary);
	if (input3) {
		int i;
		while (input3.read(reinterpret_cast<char*> (&i), sizeof(i)))
			int_vec_2.push_back(i);
	}
	input3.close();

	ifstream input4(filename, ios::binary);
	if (input4) {
		float i;
		while (input4.read(reinterpret_cast<char*> (&i), sizeof(i)))
			float_vec_2.push_back(i);
	}
	input4.close();

	cout << "\n\nWypisywanie pliku tekstowego " << endl;

	cout << "\nWektor typu int: ";
	for (auto it : int_vec_2) {
		cout << it << " | ";
	}

	cout << "\nWektor typu float: ";
	for (auto it : float_vec_2) {
		cout << it << " | ";
	}

	//Plik tekstowy wczytuje sie poprawnie
}

void zadanie3() {
	/*Complex liczba1;
	cout << "Podaj czesc rzeczywista pierwszej liczby: ";
	double a;
	cin >> a;
	liczba1.re = a;
	cout << "Podaj czesc urojona pierwszej liczby: ";
	double b;
	cin >> b;
	liczba1.im = b;

	Complex liczba2;
	cout << "Podaj czesc rzeczywista drugiej liczby: ";
	cin >> a;
	liczba2.re = a;
	cout << "Podaj czesc urojona drugiej liczby: ";
	cin >> b;
	liczba2.im = b;

	cout << "Dodawanie: ";
	print(add(liczba1, liczba2));

	cout << "Odejmowanie: ";
	print(substract(liczba1, liczba2));

	cout << "Mnozenie: ";
	print(multiply(liczba1, liczba2));

	cout << "Porownanie: ";
	if (equals(liczba1, liczba2))
		cout << "Liczby sa rowne" << endl;
	else
		cout << "Liczby nie sa rowne" << endl;
	cin.ignore(1);*/
}

void zadanie4() {
	int n = 10;
	string filename = "zadanie4.txt";
	ofstream output_bin(filename, ios::binary);
	if (output_bin) {
		for (int i = 0; i < n; i++)
			output_bin.write(reinterpret_cast<char*> (&i), sizeof(i));
	}
	output_bin.close();
}

void zadanie5() {}

int main() {

	int wybor;
	do {

		cout << "\n\n\n\n\n\n\t\tPodstawy programowania - labolatorium nr 5.\n\n " << endl;
		cout << "Wybierz zadanie: " << endl;
		cout << "[1] zadanie 1." << endl;
		cout << "[2] zadanie 2." << endl;
		cout << "[3] zadanie 3." << endl;
		cout << "[4] zadanie 4." << endl;
		cout << "[5] zadanie 5." << endl;
		cout << "[6] zadanie 6." << endl;
		cout << "[7] zadanie 7." << endl;
		cout << "[8] zadanie 8." << endl;
		cout << "[9] zadanie 9." << endl;
		cout << "[ESC] wyjscie. " << endl;
		wybor = _getch();

		switch (wybor) {
		case '1': zadanie1();
			break;
		case '2': zadanie2();
			break;
		case '3': zadanie3();
			break;
		case '4': zadanie4();
			break;
		case '5': zadanie5();
			break;
		case 27: exit(0);
			break;
		default: cout << "\nBrak zadania" << endl;
			break;
		}

		cout << "Aby kontynuowac wcisnij ENTER " << endl;
		cin.ignore(1);

	} while (wybor != '1' || wybor != '2' || wybor != '3' || wybor != '4' || wybor != '5' || wybor != '6' || wybor != '7' || wybor != '8' || wybor != '9' || wybor != 27);

	return 0;

}

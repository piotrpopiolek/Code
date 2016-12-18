#include<iostream>
#include<fstream>
#include<string>
int main()
{
	using namespace std;
	string filename;
	cout << "Podaj nazwe dla nowego pliku: ";
	cin >> filename;
	//utworz dla nowego pliku obiekt strumienia wyjsciowego i nazwij go fout
	ofstream fout(filename.c_str());
	fout << "Tylko dla Twoich oczu!\n";
	cout << "Podaj swoj tajny numer: ";
	float secret;
	cin >> secret;
	fout << "Twoj tajny numer to " << secret << endl;
	fout.close();
	//utworz dla nowego pliku obiekt strumienia wejsciowego i nazwij go fin
	ifstream fin(filename.c_str());
	cout << "Oto zawartosc pliku " << filename << ": \n";
	char ch;
	while (fin.get(ch))
		cout << ch;
	cout << "Gotowe\n";
	fin.close();
	system("pause");
	return 0;
}
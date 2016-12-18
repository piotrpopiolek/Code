#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
int main()
{
	using namespace std;
	ifstream fin;
	fin.open("zakupy.txt");
	if (fin.is_open() == false)
	{
		cerr << "Nie mozna otworzyc pliku" << endl;
		system("pause");
		exit(EXIT_FAILURE);
	}
	string item;
	int count = 0;
	getline(fin, item);
	while (fin)
	{
		++count;
		cout << count << ": " << item << endl;
		getline(fin, item);
	}
	system("pause");
	return 0;
}
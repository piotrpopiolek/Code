#include<iostream>
#include<sstream>
#include<string>
int main()
{
	using namespace std;
	string lit = "Dzien byl ciemny i burzowy, lecz ksiezyc w pelni swiecil zywym blaskiem.";
	istringstream instr(lit); //uzyj bufora do operacji wejscia
	string word;
	while (instr >> word) //odczytuj po jednym slowie naraz
		cout << word << endl;
	system("pause");
	return 0;
}
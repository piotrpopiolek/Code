#include<iostream>
#include<string>
#include<cstring>//biblioteka obslugi lancuchow z C
/*
VS uznaje te funkcje za niebezpieczne a w codeblock kompiluje sie bez problemu
strcpy(charr1, charr2);
strcat(charr1, " sok");*/
int main()
{
	using namespace std;
	char charr1[20];
	char charr2[20] = "jaguar";
	string str1;
	string str2 = "pantera";
	//przypisanie obiektow string i tablic znakowych
	str1 = str2; //kopiuje str2 do str1
	strcpy(charr1, charr2); //kopiuje charr2 do charr1
	//laczy napis z tablica znakowa
	str1 += " makaron"; //dopisanie makaronu do str1
	strcat(charr1, " sok"); //dopisanie soku do charr1
	//okreslenie dlugosci lancucha
	int len1 = str1.size(); //okresl dlugosc str1
	int len2 = strlen(charr1); //okresl dlugosc charr1
	cout << "Lancuch " << str1 << " ma " << len1 << " znakow.\n";
	cout << "Lancuch " << charr1 << " ma " << len2 << " znakow.\n";
	system("pause");
	return 0;
}
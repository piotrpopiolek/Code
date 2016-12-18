#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<cctype>
#include<utility>
#include<map>
#include<algorithm>
#include<locale>
#include<iomanip>
using namespace std;
class Tekst
{
	wstring name_of_file;
	map<wchar_t, int> Alfabet;
public:
	Tekst() {};
	Tekst(wstring name);
	~Tekst();
	void Analyze();
	void Show();
	void Save();
};


#pragma once
#include<iostream>
#include<string>
using namespace std;
class Plorg
{
	enum Stale
	{
		rozmiar = 50
	};
	char fullname[rozmiar];
	int sytosc;
public:
	Plorg(const char* name = "Plorga", int syt = 50);
	void show();
	void zmien();
	void zmien(int a);
};
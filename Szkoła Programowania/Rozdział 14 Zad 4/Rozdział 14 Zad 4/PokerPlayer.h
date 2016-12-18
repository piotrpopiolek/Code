#pragma once
#include"Person.h"
#include<iostream>
#include<cstdlib>
#include<string>
#include<ctime>
class PokerPlayer:virtual public Person
{
public:
	PokerPlayer(string i = "<imie>", string n = "<nazwisko>");
	~PokerPlayer();
	int Draw();
	void Show();
};


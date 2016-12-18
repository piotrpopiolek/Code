#pragma once
#include"Gunslinger.h"
#include"PokerPlayer.h"
class BadDude:public Gunslinger,public PokerPlayer
{
public:
	BadDude(string i = "<imie>", string n = "<nazwisko>");
	~BadDude();
	double Gdraw();
	int Cdraw();
	void Show();
};


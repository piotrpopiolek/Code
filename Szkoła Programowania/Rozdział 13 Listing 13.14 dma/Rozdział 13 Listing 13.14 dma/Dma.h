#pragma once
#ifndef DMA_H_
#define DMA_H_
#include<iostream>
//klasa bazowa korzystajaca z dynamicznego przydzialu pamieci
class baseDma
{
	char * label;
	int rating;
public:
	baseDma(const char * l = "brak", int r = 0);
	baseDma(const baseDma & rs);
	virtual ~baseDma();
	baseDma & operator=(const baseDma & rs);
	friend std::ostream & operator<<(std::ostream & os, const baseDma & rs);
};
//klasa pochodna bez dynamicznego przydzialu pamieci nie jest potrzebny destruktor
//uzywa niejawnego konstruktora kopiujaceg0
//uzywa niejawnego operatora przypisania
class lacksDma :public baseDma
{
	enum { COL_LEN = 40 };
	char color[COL_LEN];
public:
	lacksDma(const char * c = "brak", const char * l = "brak", int r = 0);
	lacksDma(const char * s,const baseDma & rs);
	friend std::ostream & operator<<(std::ostream & os, const lacksDma & rs);
};
//klasa pochodna z dynamicznym przydzialem pamieci
class hasDma :public baseDma
{
	char * style;
public:
	hasDma(const char * s = "brak", const char * l = "brak", int r = 0);
	hasDma(const char * s, const baseDma & rs);
	hasDma(const hasDma & hs);
	~hasDma();
	hasDma & operator=(const hasDma & rs);
	friend std::ostream & operator<<(std::ostream & os, const hasDma & rs);
};
#endif // !DMA_H_

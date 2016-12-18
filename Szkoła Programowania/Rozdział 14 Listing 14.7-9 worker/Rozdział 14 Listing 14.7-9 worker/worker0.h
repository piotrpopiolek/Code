#pragma once
#ifndef WORKER0_H_
#define WORKER0_H_
#include<string>
using std::string;
class Worker //abstrakcyjna klasa bazowa
{
	string fullname;
	long id;
public:
	Worker():fullname("Brak"),id(0L){}
	Worker(const string & s, long n) :fullname(s), id(n) {}
	virtual ~Worker() = 0; //destruktor czysto virtualny
	virtual void Set();
	virtual void Show() const;
};
class Waiter :public Worker
{
	int panache;
public:
	Waiter():Worker(),panache(0){}
	Waiter(const string & s, long n, int p = 0) :Worker(s, n), panache(p) {}
	Waiter(const Worker & wk, int p = 0) :Worker(wk), panache(p) {}
	void Set();
	void Show() const;
};
class Singer :public Worker
{
protected:
	enum { inny, alt, kontralt, sopran, bas, baryton, tenor };
	enum { Vtypes = 7 };
private:
	const static char * pv[Vtypes]; //odpowiednik typu glosu w postaci ciagu
	int voice;
public:
	Singer():Worker(),voice(inny){}
	Singer(const string & s, long n, int v = inny) :Worker(s, n), voice(v) {}
	Singer(const Worker & wk, int v = inny) :Worker(wk), voice(v) {}
	void Set();
	void Show() const;
};
#endif // !WORKER0_H_


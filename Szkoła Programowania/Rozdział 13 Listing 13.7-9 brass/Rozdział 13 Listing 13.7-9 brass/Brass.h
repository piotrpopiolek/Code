#pragma once
#ifndef BRASS_H_
#define BRASS_H_
#include<string>
class Brass
{
	std::string fullname;
	long acctNum;
	double balance;
public:
	Brass(const std::string & s="Brak",long an=-1,double bal=0.0);
	void Deposit(double amt);
	virtual void Withdraw(double amt);
	double Balance() const;
	virtual void ViewAcct() const;
	virtual ~Brass()
	{

	}
};
class BrassPlus :public Brass
{
	double maxLoan;
	double rate;
	double owesBank;
public:
	BrassPlus(const std::string & s = "brak", long an = -1, double bal = 0.0, double ml = 2000, double r = 0.11125);
	BrassPlus(const Brass & ba, double ml = 2000, double r = 0.11125);
	virtual void ViewAcct() const;
	virtual void Withdraw(double amt);
	void ResetMax(double m)
	{
		maxLoan = m;
	}
	void ResetRate(double r)
	{
		rate = r;
	}
	void ResetOwes()
	{
		owesBank = 0;
	}
};
#endif // !BRASS_H_

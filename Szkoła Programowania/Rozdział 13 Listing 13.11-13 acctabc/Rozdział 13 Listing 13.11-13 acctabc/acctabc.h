#pragma once
#ifndef ACCTABC_H_
#define ACCTABC_H_
#include<iostream>
#include<string>
//abstrakcyjna klasa bazowa
class Acctabc
{
	std::string fullName;
	long acctNum;
	double balance;
protected:
	struct Formatting
	{
		std::ios_base::fmtflags flag;
		std::streamsize pr;
	};
	const std::string & FullName() const const
	{
		return fullName;
	}
	long AcctNum() const 
	{
		return acctNum;
	}
	Formatting SetFormat() const;
	void Restore(Formatting & f) const;
public:
	Acctabc(const std::string & s="brak",long an=-1,double bal=0.0);
	void Deposit(double amt);
	virtual void Withdraw(double amt) = 0;
	double Balance() const
	{
		return balance;
	}
	virtual void ViewAcct() const = 0;
	virtual ~Acctabc()
	{
		std::cout << "Destruktor klasy AcctABC.\n";
	}
};
//klasa do obslugi rachunku Brass
class Brass :public Acctabc
{
public:
	Brass(const std::string & s = "brak", long an = -1, double bal = 0.0) :Acctabc(s, an, bal)
	{
		std::cout << "Konstruktor klasy Brass.\n";
	}
	virtual void Withdraw(double amt);
	virtual void ViewAcct() const;
	virtual ~Brass()
	{
		std::cout << "Destruktor klasy Brass.\n";
	}
};
//klasa do obslugi rachunku BrassPlus
class BrassPlus :public Acctabc
{
	double maxLoan;
	double rate;
	double owesBank;
public:
	BrassPlus(const std::string & s = "brak", long an = -1, double bal = 0.0, double ml = 500, double r = 0.1);
	BrassPlus(const Brass & ba, double ml = 500, double r = 0.1);
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
#endif // !ACCTABC_H_

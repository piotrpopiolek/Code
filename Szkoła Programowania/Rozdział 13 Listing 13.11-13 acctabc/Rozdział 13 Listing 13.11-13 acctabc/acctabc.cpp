#include "acctabc.h"
#include<iostream>
using std::cout;
using std::ios_base;
using std::endl;
using std::string;
Acctabc::Acctabc(const string & s, long an, double bal)
{
	cout << "Konstruktor klasy Acctabc\n";
	fullName = s;
	acctNum = an;
	balance = bal;
}
void Acctabc::Deposit(double amt)
{
	if (amt < 0)
		cout << "Nie mozesz wplacic ujemnej kwoty; " << "Wplata anulowana.\n";
	else
		balance += amt;
}
void Acctabc::Withdraw(double amt)
{
	balance -= amt;
}
//metody chronione, zajmujace sie formatowaniem
Acctabc::Formatting Acctabc::SetFormat() const
{
	Formatting f;
	f.flag = cout.setf(ios_base::fixed, ios_base::floatfield);
	f.pr = cout.precision(2);
	return f;
}
void Acctabc::Restore(Formatting & f) const
{
	cout.setf(f.flag, ios_base::floatfield);
	cout.precision(f.pr);
}
//metody klasy Brass
void Brass::Withdraw(double amt)
{
	if (amt < 0)
		cout << "Nie mozna wyplacic ujemnej kwoty; Wyplata anulowana.\n";
	else if (amt <= Balance())
		Acctabc::Withdraw(amt);
	else
		cout << "Zadana wartosc " << amt << " zl przekracza dostepne srodki.\n Wyplata anulowana.\n";
}
void Brass::ViewAcct() const
{
	Formatting f = SetFormat();
	cout << "Wlasciciel rachunku Brass: " << FullName() << endl;
	cout << "Numer rachunku: " << AcctNum() << endl;
	cout << "Stan konta: " << Balance() << " zl" << endl;
	Restore(f);
}
//metody klasy BrassPlus
BrassPlus::BrassPlus(const string & s, long an, double bal, double ml, double r) :Acctabc(s, an, bal)
{
	maxLoan = ml;
	owesBank = 0.0;
	rate = r;
	cout << "Konstruktor klasy BrassPlus\n";
}
BrassPlus::BrassPlus(const Brass & ba, double ml, double r) :Acctabc(ba)//uzywa niejawnego konstruktora kopiujacego
{
	maxLoan = ml;
	owesBank = 0.0;
	rate = r;
}
void BrassPlus::ViewAcct() const
{
	Formatting f = SetFormat();
	cout << "Wlasciciel rachunku BrassPlus: " << FullName() << endl;
	cout << "Numer rachunku: " << AcctNum() << endl;
	cout << "Stan konta: " << Balance() << " zl"<<endl;
	cout << "Limit debetu: " << maxLoan << " zl" << endl;
	cout << "Kwota zadluzenia: " << owesBank << " zl" << endl;
	cout.precision(3);
	cout << "Stopa oprocentowania: " << 100 * rate << "%\n";
	Restore(f);
}
void BrassPlus::Withdraw(double amt)
{
	Formatting f = SetFormat();
	double bal = Balance();
	if (amt <= bal)
		Acctabc::Withdraw(amt);
	else if (amt <= bal + maxLoan - owesBank)
	{
		double advance = amt - bal;
		owesBank += advance*(1.0 + rate);
		cout << "Zadluzenie faktyczne: " << advance << " zl" << endl;
		cout << "Odsetki: " << advance*rate << " zl" << endl;
		Deposit(advance);
		Acctabc::Withdraw(amt);
	}
	else
		cout << "Przekroczony limit debetu. Operacja anulowana.\n";
	Restore(f);
}
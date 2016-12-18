#pragma once
#ifndef STOCK20_H_
#define STOCK20_H_
#include<string>
class Stock
{
	char * company;
	long shares;
	double share_val;
	double total_val;
	void set_tot();
public:
	Stock(char * co="bez nazwy", long n = 0, double pr = 0.0);
	~Stock();
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show() const;
	const Stock & topval(const Stock & s) const;
};
#endif // !STOCK10_H_

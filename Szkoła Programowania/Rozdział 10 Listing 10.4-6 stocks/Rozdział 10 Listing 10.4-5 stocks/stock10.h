#pragma once
#ifndef STOCK10_H_
#define STOCK01_H_
#include<string>
class Stock
{
	std::string company;
	long shares;
	double share_val;
	double total_val;
	void set_tot();
public:
	Stock();
	Stock(const std::string & co, long n = 0, double pr = 0.0);
	~Stock();
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show();
};
#endif // !STOCK10_H_

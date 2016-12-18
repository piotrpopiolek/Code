#ifndef STOCKOO_H_
#define STOCKOO_H_
#include<string>
class Stock
{
	std::string company;
	long shares;
	double share_val;
	double total_val;
	void set_tot();
public:
	void acquicre(const std::string & co, long n, double pr);
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show();
};
#endif // !STOCKOO_H_

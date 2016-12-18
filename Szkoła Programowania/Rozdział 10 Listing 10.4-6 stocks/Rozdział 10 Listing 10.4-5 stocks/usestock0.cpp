#include<iostream>
#include"stocks00.cpp"
int main()
{
	Stock f;
	f.acquicre("NanoSmart", 20, 12.50);
	f.show();
	f.buy(15, 18.125);
	f.show();
	f.sell(400, 20.0);
	f.show();
	f.buy(300000, 40.125);
	f.show();
	f.sell(300000, 0.125);
	f.show();
	system("pause");
	return 0;
}
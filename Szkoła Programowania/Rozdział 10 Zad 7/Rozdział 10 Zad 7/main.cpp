#include"Plorg.h"
int main()
{
	Plorg a;
	Plorg b("Pepe", 100);
	Plorg c("Poz REWWR", 20);
	a.show();
	b.show();
	c.show();
	c.zmien(30);
	c.show();
	c.zmien();
	c.show();
	system("pause");
	return 0;
}
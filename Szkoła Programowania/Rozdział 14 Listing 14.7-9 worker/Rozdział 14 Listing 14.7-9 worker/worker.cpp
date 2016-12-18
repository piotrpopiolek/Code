#include"worker0.h"
#include<iostream>
const int LIM = 4;
int main()
{
	Waiter bob("Robert Gruszka", 314L, 5);
	Singer bev("Beverly Hills", 522L, 3);
	Waiter w_temp;
	Singer s_tempo;
	Worker * pw[LIM] = { &bob,&bev,&w_temp,&s_tempo };
	int i;
	for (i = 2; i < LIM; i++)
		pw[i]->Set();
	for (i = 0; i < LIM; i++)
	{
		pw[i]->Show();
		std::cout << std::endl;
	}
	system("pause");
	return 0;
}
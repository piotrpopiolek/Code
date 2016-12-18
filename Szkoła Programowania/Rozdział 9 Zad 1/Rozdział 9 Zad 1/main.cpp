#include<iostream>
#include "golf.h"
int main()
{
	golf o1;
	setgolf(o1,"333333333333333333333",3);
	golf o2;
	setgolf(o2,"pepe",1);
	showgolf(o1);
	showgolf(o2);
	handicap(o1, 100);
	showgolf(o1);
	system("pause");
	return 0;
}



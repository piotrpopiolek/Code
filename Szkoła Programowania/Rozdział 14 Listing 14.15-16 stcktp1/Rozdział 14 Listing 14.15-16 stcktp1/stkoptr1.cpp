#include<iostream>
#include<cstdlib>
#include<ctime>
#include"stacktp.h"
const int Num = 10;
int main()
{
	std::srand(std::time(0));
	std::cout << "Podaj rozmiar stosu: ";
	int stacksize;
	std::cin >> stacksize;
	Stack<const char *> st(stacksize);
	const char * in[Num] =
	{
		"1: Henryk Gilgamesz",
		"2: Kinga Isztar",
		"3: Beata Roker",
		"4: Jan Flagranti",
		"5: Wolfgang Mocny",
		"6: Patrycja Kup",
		"7: Jacek Almond",
		"8: Ksawary Papryka",
		"9: Julian Mor",
		"10: Marian Macher"
	};

	const char * out[Num];
	int processed = 0;
	int nextin = 0;
	while (processed < Num)
	{
		if (st.isempty())
			st.push(in[nextin++]);
		else if (st.isfull())
			st.pop(out[processed++]);
		else if (std::rand() % 2 && nextin < Num) // szanse pol na pol
			st.push(in[nextin++]);
		else
			st.pop(out[processed++]);
	}
	for (int i = 0; i < Num; i++)
		std::cout << out[i] << std::endl;
	system("pause");
	return 0;
}
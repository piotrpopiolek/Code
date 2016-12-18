#include<iostream>
int main()
{
	char ch;
	std::cout << "Pisz, a ja bede powtarzac.\n";
	std::cin.get(ch);
	while (ch != '.')
	{
		if (ch == '\n')
			std::cout << ch;
		else
			std::cout << ++ch;
		std::cin.get(ch);
	}
	std::cout << "\nProsze wybaczyc drobne niedorobki.\n";
	system("pause");
	return 0;
}
#include<iostream>
#include<string>
//definicja dla pustej listy parametrow
void show_list(){}
//definicja dla pojedynczego parametru
template<typename T>
void show_list(const T& value)
{
	std::cout << value << '\n';
}
//definicja dla dwoch i wiecej parametrow
template<typename T,typename... Args>
void show_list(const T& value, const Args&... args)
{
	std::cout << value << ", ";
	show_list(args...);
}
int main()
{
	int n = 14;
	double x = 2.71828;
	std::string mr = "Mosci String tez!";
	show_list(n, x);
	show_list(x*x, '!', 7, mr);
	system("pause");
	return 0;
}
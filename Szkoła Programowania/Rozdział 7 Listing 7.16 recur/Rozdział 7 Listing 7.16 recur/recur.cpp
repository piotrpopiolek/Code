#include<iostream>
void countdown(int n);
int main()
{
	countdown(4);
	system("pause");
	return 0;
}
void countdown(int n)
{
	using namespace std;
	cout << "Odliczanie ... " << n <<" (n spod adresu " << &n << ")" << endl;
	if (n > 0)
		countdown(n - 1);
	cout << n << ". Ba-bach!"<< " \t (n spod adresu " << &n << ")" << endl;
}
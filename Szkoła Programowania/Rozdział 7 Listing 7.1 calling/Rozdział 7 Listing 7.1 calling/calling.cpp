#include<iostream>
void simple();
int main()
{
	using namespace std;
	cout << "main() wywola funkcje simple():\n";
	simple();
	cout << "main() po zakonczeniu funkcji simple().\n";
	system("pause");
	return 0;
}
void simple()
{
	using namespace std;
	cout << "Jestem sobie taka prosciutka funkcja.\n";
}
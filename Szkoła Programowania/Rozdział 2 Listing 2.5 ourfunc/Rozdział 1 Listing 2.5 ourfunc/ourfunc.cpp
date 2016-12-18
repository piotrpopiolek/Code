#include<iostream>
void simon(int);
int main()
{
	using namespace std;
	simon(3);
	cout << "Podaj liczbe calkowita: ";
	int count;
	cin >> count;
	simon(count);
	cout << "Gotowe!" << endl;
	system("pause");
	return 0;
}
void simon(int n)
{
	using namespace std;
	cout << "Simon prosi, abys dotknal palcow u stop " << n << " razy." << endl;
}
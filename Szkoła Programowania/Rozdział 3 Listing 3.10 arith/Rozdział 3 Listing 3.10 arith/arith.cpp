#include<iostream>
int main()
{
	using namespace std;
	double hats, heads;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << "Podaj liczbe: ";
	cin >> hats;
	cout << "Podaj druga liczbe: ";
	cin >> heads;
	cout << "hats = " << hats<<endl;
	cout << "heads = " << heads << endl;
	cout << "hats + head = " << hats + heads << endl;
	cout << "hats - head = " << hats - heads << endl;
	cout << "hats * head = " << hats * heads << endl;
	cout << "hats / head = " << hats / heads << endl;
	system("pause");
	return 0;
}
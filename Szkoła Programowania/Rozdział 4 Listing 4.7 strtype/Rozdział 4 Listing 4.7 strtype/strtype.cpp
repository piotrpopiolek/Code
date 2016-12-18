#include<iostream>
#include<string>
int main()
{
	using namespace std;
	char charr1[20];
	char charr2[20] = "jaguar";
	string str1;
	string str2 = "pantera";
	cout << "Podaj gatunek kota: ";
	cin >> charr1;
	cout << "Podaj inny gatunek kota: ";
	cin >> str1;
	cout << "Oto wybrane kotowate:\n";
	cout << charr1 << " " << charr2 << " " << str1 << " " << str2 << endl;
	cout << "Trzecia litera w slowie " << charr2 << " to " << charr2[2] << endl;
	cout << "Trzecia litera w slowie " << str2 << " to " << str2[2] << endl;
	system("pause");
	return 0;
}
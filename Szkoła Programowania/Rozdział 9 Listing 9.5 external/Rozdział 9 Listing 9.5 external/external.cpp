#include<iostream>
using namespace std;
double warning = 0.3;
void update(double dt);
void local();
int main()
{
	cout << "Globalne ocieplenie wynosi: " << warning << " stopni.\n";
	update(0.1);
	cout << "Globalne ocieplenie wynosi: " << warning << " stopni.\n";
	local();
	cout << "Globalne ocieplenie wynosi: " << warning << " stopni.\n";
	system("pause");
	return 0;
}
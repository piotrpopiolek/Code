#include<iostream>
struct inflatable //deklaracja struktury
{
	char name[20];
	float volume;
	double price;
};
int main()
{
	using namespace std;
	inflatable guest =
	{
		"Glorious Gloria",
		1.88,
		29.99
	}; 
	inflatable pal =
	{
		"Audacious Arthur",
		3.12,
		32.99
	};
	cout << "Wpisz na swoja liste gosci jeszcze " << guest.name;
	cout << " oraz " << pal.name << "!\n";
	cout << "Mozesz miec ich oboje za ";
	cout << guest.price + pal.price << " zl!\n";
	system("pause");
	return 0;
}
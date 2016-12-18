#include<iostream>
struct inflatable
{
	char name[20];
	float volume;
	double price;
};
int main()
{
	using namespace std;
	inflatable guests[2] =
	{
		{"Bambi",0.5,21.99},
		{"Godzila",2000,565.32}
	};
	cout << "Goscie tacy jak " << guests[0].name << " i " << guests[1].name << "\nrazem maja " << guests[0].volume + guests[1].volume << " stop szesciennych.\n";
	system("pause");
	return 0;
}
#include<iostream>
#include<string>
#include<memory>
int main()
{
	using namespace std;
	auto_ptr<string> films[5] =
	{
		auto_ptr<string>(new string("Sowki, sowki")),
		auto_ptr<string>(new string("Gadajaca kaczka")),
		auto_ptr<string>(new string("Wyscig kurczakow")),
		auto_ptr<string>(new string("Kozi syn")),
		auto_ptr<string>(new string("Kukulcze jaja"))
	};
	auto_ptr<string> pwin;
	pwin = films[2]; //film[2] traci "posiadanie"
	cout << "Nominowany w kategorii najlepszego filmu przyrodniczego sa:\n";
	for (int i = 0; i < 5; i++)
	{
		cout << *films[i] << endl;
	}
	cout << "A zwyciezca jest " << *pwin << "!\n";
	cin.get();
	system("pause");
	return 0;
}
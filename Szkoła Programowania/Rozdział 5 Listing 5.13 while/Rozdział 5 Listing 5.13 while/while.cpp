#include<iostream>
const int ArSize = 20;
int main()
{
	using namespace std;
	char name[ArSize];
	cout << "Prosze podac swoje imie: ";
	cin >> name;
	cout << "Oto Twoje imie, ustawione pionowo, jako kody ACSII: \n";
	int i = 0;
	while (name[i] != '\0')
	{
		cout << name[i] << ": " << int(name[i]) << endl;
		i++;
	}
	system("pause");
	return 0;
}
#include<iostream>
using namespace std;
int main()
{
	struct Pizza
	{
		char marka[50];
		double waga;
		int srednica;
	};
	Pizza* mala = new Pizza;
	cout << "Podaj marke: ";
	cin >> mala->marka;
	cout << "Podaj wage: ";
	cin >> mala->waga;
	cout << "Podaj srednice: ";
	cin >> mala->srednica;
	cout << mala->marka << endl;
	cout << mala->waga << endl;
	cout << mala->srednica << endl;
	delete mala;
	system("pause");
	return 0;
}
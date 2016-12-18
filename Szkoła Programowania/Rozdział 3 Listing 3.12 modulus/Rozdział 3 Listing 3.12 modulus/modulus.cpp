#include<iostream>
int main()
{
	using namespace std;
	const int Lbs_per_stn = 14;
	int lbs;
	cout << "Podaj swoja wage w funtach: " << endl;
	cin >> lbs;
	int stone = lbs / Lbs_per_stn;
	int pounds = lbs%Lbs_per_stn;
	cout << lbs << " funtow to " << stone << " kamieni, " << pounds << " funt(ow).\n";
	system("pause");
	return 0;
}
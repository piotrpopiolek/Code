#include<iostream>
using namespace std;
//interfejs
class Useless
{
	int n;
	char * pc;
	static int ct; //liczba elementow
	void ShowObject() const;
public:
	Useless();
	explicit Useless(int k);
	Useless(int k, char ch);
	Useless(const Useless & f); //zwyczajny konstruktor kopiujacy
	Useless(Useless && f); //konstruktor przenoszacy
	~Useless();
	Useless operator+(const Useless & f) const;
	Useless & operator=(const Useless & f);
	Useless & operator=(Useless && f);
	void ShowData() const;
};
//implementacja
int Useless::ct = 0;
Useless::Useless()
{
	++ct;
	n = 0;
	pc = nullptr;
}
Useless::Useless(int k) :n(k)
{
	++ct;
	pc = new char[n];
}
Useless::Useless(int k, char ch) :n(k)
{
	++ct;
	pc = new char[n];
	for (int i = 0; i < n; i++)
		pc[i] = ch;
}
Useless::Useless(const Useless & f) :n(f.n)
{
	++ct;
	pc = new char[n];
	for (int i = 0; i < n; i++)
		pc[i] = f.pc[i];
}
Useless::Useless(Useless && f) :n(f.n)
{
	++ct;
	pc = f.pc;
	f.pc = nullptr;
	f.n = 0;
}
Useless::~Useless()
{
	delete[] pc;
}
Useless Useless::operator+(const Useless & f) const
{
	Useless temp = Useless(n + f.n);
	for (int i = 0; i < n; i++)
	{
		temp.pc[i] = pc[i];
	}
	for (int i = n; i < temp.n; i++)
	{
		temp.pc[i] = f.pc[i - n];
	}
	return temp;
}
Useless & Useless::operator=(const Useless & f)
{
	std::cout << "kopiujacy operator przypisania:\n";
	if (this == &f)
		return *this;
	delete[]pc;
	n = f.n;
	pc = new char[n];
	for (int i = 0; i < n; i++)
		pc[i] = f.pc[i];
	return *this;
}
Useless & Useless::operator=(Useless && f)
{
	std::cout << "przenoszacy operator przypisania:\n";
	if (this == &f)
		return *this;
	delete[] pc;
	n = f.n;
	pc = f.pc;
	f.n = 0;
	f.pc = nullptr;
	return *this;
}
void Useless::ShowObject() const
{
	cout << "Liczba elementow: " << n;
	cout << ", adres danych: " << (void *)pc << endl;
}
void Useless::ShowData() const
{
	if (n == 0)
		cout << "(obiekt pusty)";
	else
		for (int i = 0; i < n; i++)
			cout << pc[i];
	cout << endl;
}
//aplikacja
int main()
{
	{
		Useless one(10, 'x');
		Useless two = one + one;
		cout << "obiekt one: ";
		one.ShowData();
		cout << "obiekt two: ";
		two.ShowData();
		Useless three, four;
		cout << "three = one\n";
		three = one;
		//automatyczne przypisanie kopiujace
		cout << "teraz obiekt three = ";
		cout << "obiekt three = ";
		three.ShowData();
		cout << "a obiekt one = ";
		one.ShowData();
		cout << "four = one + two\n";
		four = one + two;
		//automatyczne przypisanie kopiujace 
		cout << "teraz obiekt four = ";
		four.ShowData();
		cout << "four = move(one)\n";
		four = std::move(one);
		//wymuszone przypisanie przenoszace
		cout << "teraz obiekt four = ";
		four.ShowData();
		cout << "a obiekt one = ";
		one.ShowData();
	}
	system("pause");
	return 0;
}
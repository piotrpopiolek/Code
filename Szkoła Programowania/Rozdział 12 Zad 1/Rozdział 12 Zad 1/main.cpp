#include<iostream>
using std::cin;
using std::cout;
using std::endl;
class Cow
{
	char name[20];
	char * hobby;
	double weight;
public:
	Cow():name("Brak nazwy")
	{
		hobby = new char[5];
		hobby = "Brak";
	}
	Cow(const char * nm, const char * ho="Brak", double wt=0.0):weight(wt),name("Brak")
	{
		int i = 0;
		while (i <= strlen(nm))
		{
			name[i] = nm[i];
			i++;
		}
		i = 0;
		int si = strlen(ho);
		hobby = new char[si + 1];
		while (i <= strlen(ho))
		{
			hobby[i] = ho[i];
			i++;
		}
	}
	Cow(const Cow & c)
	{
		int i = 0;
		while (i <= strlen(c.name))
		{
			name[i] = c.name[i];
			i++;
		}
		i = 0;
		hobby = new char[strlen(c.hobby) + 1];
		while (i <= strlen(c.hobby))
		{
			hobby[i] = c.hobby[i];
			i++;
		}
		weight = c.weight;
	}
	~Cow()
	{
		delete[] hobby;
	}
	Cow & operator=(const Cow & c)
	{
		if (this == &c)
			return *this;
		delete [] hobby;
		hobby = new char[strlen(c.hobby) + 1];
		int i = 0;
		while (i <= strlen(c.hobby))
		{
			hobby[i] = c.hobby[i];
			i++;
		}
		i = 0;
		while (i <= strlen(c.name))
		{
			name[i] = c.name[i];
			i++;
		}
		weight = c.weight;
	}
	void ShowCow() const
	{
		cout << "Nazwa: " << name << endl;
		cout << "Hobby: " << hobby << endl;
		cout << "Waga: " << weight << endl;
	}
};
int main()
{
	Cow A("Nazwa", "Hobby", 3);
	A.ShowCow();
	Cow B(A);
	B.ShowCow();
	Cow C("Siema", "Kopiuj Pepe", 5);
	Cow D = C;
	D.ShowCow();
	system("pause");
	return 0;
}

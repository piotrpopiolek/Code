#include"Person.hpp"
#include"Student.hpp"
#include<vector>
#include<fstream>
void Zadanie1();
void Zadanie2();
void Zadanie3();
vector<Person> createList();
void Zadanie4();
void Zadanie5();
void Zadanie6();
int main()
{
	int numer_zadania;
	do
	{
		cout << "Podaj numer zadania, zero konczy program." << endl;
		cin >> numer_zadania;
		switch (numer_zadania)
		{
		case 0:
		{
			cout << "Koniec programu!" << endl;
			break;
		}
		case 1:
		{
			Zadanie1();
			break;
		}
		case 2:
		{
			Zadanie2();
			break;
		}
		case 3:
		{
			Zadanie3();
			break;
		}
		case 4:
		{
			Zadanie4();
			break;
		}
		case 5:
		{
			Zadanie5();
			break;
		}
		case 6:
		{
			Zadanie6();
			break;
		}
		default:
		{
			cout << "Brak takiego zadania!" << endl;
			break;
		}
		}
	} while (numer_zadania != 0);
	system("pause");
	return 0;
}
void Zadanie1()
{
	cout << "Zadanie 1" << endl;
	Person P1;
	P1.firstName = "Adam";
	P1.lastName = "Nowak";
	P1.age = 25;
	P1.gender = 'M';
	display(P1);
}
void Zadanie2()
{
	cout << "Zadanie 2" << endl;
	Person P2 = { "Magdalena","Nowicka",22,'K' };
	Person P3 = createPerson();
	display(P2);
	display(P3);
}
void Zadanie3()
{
	cout << "Zadanie 3" << endl;
	Student P1 = { "Karol","Walas","15/01/1993",125324 };
	display(P1);
}
vector<Person> createList()
{
	vector<Person> Temp;
	cout << "Ile osob chcesz dodac do listy?" << endl;
	int size; cin >> size;
	for (int i = 0; i < size; i++)
	{
		Temp.push_back(createPerson());
	}
	return Temp;
}
void Zadanie4()
{
	cout << "Zadanie 4" << endl;
	vector<Person> Lista = createList();
	ofstream file;
	string name = "Zadanie4.txt";
	file.open(name.c_str());
	if (!file.is_open())
	{
		cout << "Nie udalo sie otworzyc pliku o nazwie: " << name << endl;
		cout << "Byla to proba zapisu do pliku" << endl;
		system("pause");
		exit(EXIT_FAILURE);
	}
	for (vector<Person>::iterator I = Lista.begin(); I != Lista.end(); I++)
	{
		file << I->firstName << " " << I->lastName << " " << I->gender <<" "<< I->age << endl;
	}
}
void Zadanie5()
{
	cout << "Zadanie 5" << endl;
	ifstream file;
	string name = "Zadanie4.txt";
	file.open(name.c_str());
	if (!file.is_open())
	{
		cout << "Nie udalo sie otworzyc pliku o nazwie: " << name << endl;
		cout << "Byla to proba odczytu z pliku" << endl;
		system("pause");
		exit(EXIT_FAILURE);
	}
	Person Temp;
	vector<Person> Lista;
	double suma = 0;
	while (file >> Temp.firstName >> Temp.lastName >> Temp.gender >> Temp.age)
	{
		Lista.push_back(Temp);
		suma += Temp.age;
	}
	for (auto i : Lista)
	{
		file.open(name.c_str());
		display(i);
	}
	cout << "Srednia wieku wynosi " << suma / Lista.size();
}
void Zadanie6()
{

}
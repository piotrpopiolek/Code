#include "Lista.h"
void Lista::read()
{
	ifstream odczyt; //obiekt obslugujacy ODCZYT z pliku
	string nazwa = "dane.txt";
	odczyt.open(nazwa);
	if (!odczyt.is_open()) // sprawdza czy udalo sie otworzyc plik
	{
		cout << "Nie udalo sie otworzyc pliku\n";
		system("pause");
		exit(EXIT_FAILURE);
	}
	string i;
	string na;
	int in;
	while (odczyt >> in >> i >> na)
	{
		add(i, na, in);
	}
	odczyt.close();
}
void Lista::save()
{
	ofstream zapis;
	string nazwa = "dane.txt";
	zapis.open(nazwa,ios_base::trunc);
	if (!zapis.is_open()) 
	{
		cout << "Nie udalo sie otworzyc pliku\n";
		system("pause");
		exit(EXIT_FAILURE);
	}
	Student* temp = wskaznik;
	while (temp)
	{
		zapis << temp->index << "\t" << temp->imie << "\t" << temp->nazwisko << endl;
		temp=temp->next;
	}
}
Lista::Lista()
{
	wskaznik = NULL;
}
Lista::~Lista()
{
	Student *p, *nx;
	for (p = wskaznik; p != NULL; p = nx)
	{
		nx = p->next;
		delete p;
	}
	wskaznik = NULL;
}
void Lista::add(string i, string na, int in)
{
	if ((wskaznik == NULL) || (wskaznik->index >= in))
	{
		wskaznik = new Student(i, na, in, wskaznik);
		return;
	}
	else
	{
	Student* p = wskaznik;
	Student* nx;
	while (p)
	{
		nx = p->next;
		if (nx == NULL)
		{
			p->next = new Student(i, na, in, nx);
			return;
		}
		if (nx->index >= in)
		{
			p->next = new Student(i, na, in, nx);
			return;
		}
		p = p->next;
	}
	}
}
void Lista::print()
{
	if (wskaznik == NULL)
	{
		cout << "Lista jest pusta!" << endl;
	}
	else
	{
		cout << "Index\t Imie\t Nazwisko\t" << endl;
		for (Student* p = wskaznik; p; p = p->next)
		{
			cout << p->index << "\t" << p->imie << "\t" << p->nazwisko << endl;
		}
	}
}
bool Lista::search(int n)
{
	Student* temp=wskaznik;
	while (temp)
	{
		if (temp->index == n)
		{
			cout << temp->index << "\t" << temp->imie << "\t" << temp->nazwisko << endl;
			return true;
		}
		temp = temp->next;
	}
	cout << "Brak osoby o takim indeksie" << endl;
	return false;

}
bool Lista::delete_student(int n)
{
	if (search(n))
	{
		Student *p = wskaznik;
		Student *pom = wskaznik;
		if (wskaznik->index == n)
		{
			wskaznik = wskaznik->next;
			delete p;
			return true;
		}
		while (p)
		{
			if (p->index == n)
			{
				pom->next = p->next;
				delete p;
				return true;
			}
			pom = p;
			p = p->next;
		}
		return false;
	}
}
void Lista::delete_all()
{
	Student *temp;
	while (wskaznik)
	{
		temp = wskaznik;
		wskaznik = wskaznik->next;
		delete temp;
	}
}

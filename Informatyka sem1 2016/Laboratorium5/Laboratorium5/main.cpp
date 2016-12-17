#include<iostream>
#include<vector>
#include<array>
#include<string>
#include<time.h>
#include<fstream>
#include<iomanip>
using namespace std;
vector<double> randomVector(unsigned int size, int min, int max);
template<typename T>
T sum(const vector<T> &v);
array<double, 2> minmax(const vector<double> &v);
void print(const vector<double> &v);
void print(const vector<double> &v,int n);
double average(const vector<double> &v);
void Zadanie1();
array<double, 4> statistics(const vector<double> &v);
void Zadanie2();
bool equals(const vector<double> &a, const vector<double> &b);
vector<double> add(const vector<double> &a, const vector<double> &b);
vector<double> substract(const vector<double> &a, const vector<double> &b);
vector<double> multiply(const vector<double> &a, const double b);
void Zadanie3();
void writeVector(const vector<double> & vec, const string &filename);
void Zadanie4();
vector<double> readVector(const string &filename);
void Zadanie5();
void bubbleSort(vector<double> &v);
void Zadanie6();
vector<vector<double>> createMatrix(int m, int n);
void displayMatrix(const vector<vector<double>> & V);
void Zadanie7();
double inv(double x);
double inv_square(double x);
void forEach(vector<vector<double>> &m, double(&fun)(double));
void Zadanie8();
int main()
{
	srand(time(NULL));
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
		case 7:
		{
			Zadanie7();
			break;
		}
		case 8:
		{
			Zadanie8();
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
vector<double> randomVector(unsigned int size, int min, int max)
{
	vector<double> temp(size);
	for (int i = 0; i < size; i++)
	{
		temp.at(i) = rand() % (max - min) + min;
	}
	return temp;
}
template<typename T>
T sum(const vector<T> &v)
{
	T sum = 0;
	for (T i : v)
		sum += i;
	return sum;
}
double average(const vector<double> &v)
{
	return sum(v) / v.size();
}
array<double, 2> minmax(const vector<double> &v)
{
	array<double, 2> temp;
	temp.at(0) = v[0];
	temp.at(1) = v[0];
	for (int i = 0; i < v.size(); i++)
	{
		if (temp[0] > v[i])
		{
			temp[0] = v[i];
		}
		if (temp[1] < v[i])
		{
			temp[1] = v[i];
		}
	}
	return temp;
}
void print(const vector<double> &v)
{
	int n = 6;
	for (double i : v)
	{
		cout << setw(n) << i << setw(n);
	}
	cout << endl;
}
void Zadanie1()
{
	//Przekazuj¹c dane przez referencje warto uzywac w okreslonych przypadkach przedrostka const
	//tak aby miec pewnosc ze zle napisana funkcja nie zmieni przypadkiem naszych danych 
	cout << "Zadanie 1" << endl;
	vector<double> A = randomVector(15, 0, 100);
	cout << "Pokaz wektor A" << endl;
	print(A);
	cout << "Suma wektora wynosi: " << sum(A) << endl;
	cout << "Srednia wektora wynosi: " << average(A) << endl;
	cout << "Element min w wektorze to: " << minmax(A)[0] << " element max w wektorze to: " << minmax(A)[1] << endl;
}
array<double, 4> statistics(const vector<double> &v)
{
	array<double, 4> temp;
	temp[0] = sum(v);
	temp[1] = average(v);
	temp[2] = minmax(v)[0];
	temp[3] = minmax(v)[1];
	return temp;
}
void Zadanie2()
{
	cout << "Zadanie 2" << endl;
	int size; 
	cout << "Podaj rozmiar wektora ";
	cin >> size;
	cout << "Podaj zakres losowania min i max" << endl;
	int min, max;
	cin >> min >> max;
	vector<double> A = randomVector(size, min, max);
	array<double, 4> result = statistics(A);
	print(A);
	cout << "Suma wektora wynosi: " << result[0] << endl;
	cout << "Srednia wektora wynosi: " << result[1] << endl;
	cout << "Element min w wektorze to: " << result[2] << " element max w wektorze to: " << result[3] << endl;
}
bool equals(const vector<double> &a, const vector<double> &b)
{
	bool warunek = true;
	if (a.size() != b.size())
	{
		return false;
	}
	else
	{
		for (int i = 0; i < a.size(); i++)
		{
			if (a[i] != b[i])
			{
				warunek = false;
			}
		}
	}
	return warunek;
}
vector<double> add(const vector<double> &a, const vector<double> &b)
{
	int rozmiar;
	vector<double> result;
	if (a.size() < b.size())
	{
		rozmiar = a.size();
	}
	else
	{
		rozmiar = b.size();
	}
	for (int i = 0; i < rozmiar; i++)
	{
		result.push_back(a[i] + b[i]);
	}
	if(a.size() < b.size())
	{ 
		for (int i = rozmiar; i < b.size(); i++)
		{
			result.push_back(b[i]);
		}
	}
	else
	{
		for (int i = rozmiar; i < a.size(); i++)
		{
			result.push_back(a[i]);
		}
	}	
	return result;
}
vector<double> substract(const vector<double> &a, const vector<double> &b)
{
	int rozmiar;
	vector<double> result;
	if (a.size() < b.size())
	{
		rozmiar = a.size();
	}
	else
	{
		rozmiar = b.size();
	}
	for (int i = 0; i < rozmiar; i++)
	{
		result.push_back(a[i] - b[i]);
	}
	if (a.size() < b.size())
	{
		for (int i = rozmiar; i < b.size(); i++)
		{
			result.push_back(b[i]);
		}
	}
	else
	{
		for (int i = rozmiar; i < a.size(); i++)
		{
			result.push_back(a[i]);
		}
	}
	return result;
}
vector<double> multiply(const vector<double> &a, const double b)
{
	int rozmiar;
	vector<double> result(a.size());
	for (int i = 0; i < result.size(); i++)
	{
		result[i] = a[i] * b;
	}
	return result;
}
void Zadanie3()
{
	cout << "Zadanie 3" << endl;
	int size;
	cout << "Podaj rozmiar wektora A ";
	cin >> size;
	cout << "Podaj zakres losowania min i max " << endl;
	int min, max;
	cin >> min >> max;
	vector<double> A = randomVector(size, min, max);
	cout << "Podaj rozmiar wektora B ";
	cin >> size;
	cout << "Podaj zakres losowania min i max " << endl;
	cin >> min >> max;
	vector<double> B = randomVector(size, min, max);
	cout << "Podaj skalar do mnozenia wektorow" << endl;
	double skalar; cin >> skalar;
	cout << "Wektor A" << endl;
	print(A);
	cout << "Wektor B" << endl;
	print(B);
	cout << "Czy wektory sa rowne?" << endl;
	if (equals(A, B))
	{
		cout << "Tak" << endl;
	}
	else
	{
		cout << "Nie" << endl;
	}
	cout << endl;
	cout << "Dodaje wektory A i B" << endl;
	vector<double> C = add(A, B);
	print(C);
	array<double, 4> resultA = statistics(A);
	cout << "Suma wektora A wynosi: " << resultA[0] << endl;
	cout << "Srednia wektora A wynosi: " << resultA[1] << endl;
	cout << "Element min w wektorze A to: " << resultA[2] << " element max w wektorze A to: " << resultA[3] << endl;
	array<double, 4> resultB = statistics(B);
	cout << "Suma wektora B wynosi: " << resultB[0] << endl;
	cout << "Srednia wektora B wynosi: " << resultB[1] << endl;
	cout << "Element min w wektorze B to: " << resultB[2] << " element max w wektorze B to: " << resultB[3] << endl;
	array<double, 4> resultC = statistics(C);
	cout << "Suma wektora C wynosi: " << resultC[0] << endl;
	cout << "Srednia wektora C wynosi: " << resultC[1] << endl;
	cout << "Element min w wektorze C to: " << resultC[2] << " element max w wektorze C to: " << resultC[3] << endl;
	cout << endl;

	cout << "Odejmuje wektory A i B" << endl;
	C = substract(A, B);
	print(C);
	resultA = statistics(A);
	cout << "Suma wektora A wynosi: " << resultA[0] << endl;
	cout << "Srednia wektora A wynosi: " << resultA[1] << endl;
	cout << "Element min w wektorze A to: " << resultA[2] << " element max w wektorze A to: " << resultA[3] << endl;
	resultB = statistics(B);
	cout << "Suma wektora B wynosi: " << resultB[0] << endl;
	cout << "Srednia wektora B wynosi: " << resultB[1] << endl;
	cout << "Element min w wektorze B to: " << resultB[2] << " element max w wektorze B to: " << resultB[3] << endl;
	resultC = statistics(C);
	cout << "Suma wektora C wynosi: " << resultC[0] << endl;
	cout << "Srednia wektora C wynosi: " << resultC[1] << endl;
	cout << "Element min w wektorze C to: " << resultC[2] << " element max w wektorze C to: " << resultC[3] << endl;
	cout << endl;

	cout << "Mnoze wektory przez skalar " << skalar << endl;
	C = multiply(A, skalar);
	vector<double> D = multiply(B, skalar);
	cout << "Wektor A" << endl;
	print(C);
	cout << "Wektor B" << endl;
	print(D);
	resultA = statistics(C);
	cout << "Suma wektora A wynosi: " << resultA[0] << endl;
	cout << "Srednia wektora A wynosi: " << resultA[1] << endl;
	cout << "Element min w wektorze A to: " << resultA[2] << " element max w wektorze A to: " << resultA[3] << endl;
	resultB = statistics(D);
	cout << "Suma wektora B wynosi: " << resultB[0] << endl;
	cout << "Srednia wektora B wynosi: " << resultB[1] << endl;
	cout << "Element min w wektorze B to: " << resultB[2] << " element max w wektorze B to: " << resultB[3] << endl;
}
void writeVector(const vector<double> & vec, const string &filename)
{
	ofstream file;
	string name = filename + ".txt";
	file.open(name.c_str());
	if (!file.is_open())
	{
		cout << "Nie udalo sie otworzyc pliku o nazwie: " << name << endl;
		cout << "Byla to proba zapisu do pliku" << endl;
		system("pause");
		exit(EXIT_FAILURE);
	}
	int k = 1;
	for (auto i : vec)
	{
		if (k % 10 == 0)
			file << endl;
		k++;
		file << i <<" ";
	}
	cout << "Nastapil zapis do pliku" << endl;
}
void Zadanie4()
{
	cout << "Zadanie 4" << endl;
	vector<double> A = randomVector(100, -100, 100);
	writeVector(A, "Zadanie4");
}
vector<double> readVector(const string &filename)
{
	ifstream file;
	string namefile = filename + ".txt";

	file.open(namefile.c_str());

	if (!file.is_open())
	{
		cout << "Nie udalo sie otworzyc pliku o nazwie: " << namefile << '\n';

		system("pause");
		exit(EXIT_FAILURE);
	}

	float liczba;
	vector<double> temp;
	while (file >> liczba)
	{
		temp.push_back(liczba);
	}
	return temp;
}
void Zadanie5()
{
	cout << "Zadanie 5" << endl;
	vector<double> A = readVector("Zadanie4");
	print(A);
}
void bubbleSort(vector<double> &v)
{
	for (int i = 0; i < v.size() - 1; i++)
	{
		for (int j = 0; j < v.size() - 1; j++)
			if (v[j] > v[j + 1])
				swap(v[j], v[j + 1]);
	}
}
void Zadanie6()
{
	cout << "Zadanie 6" << endl;
	cout << "Podaj rozmiar wektora " << endl;
	int roz; cin >> roz;
	vector<double> A = randomVector(roz, -999, 999);
	writeVector(A, "Zadanie 6 Przed sortowaniem");
	bubbleSort(A);
	writeVector(A, "Zadanie 6 Po sortowaniu");
}
vector<vector<double>> createMatrix(int m, int n)
{
	int min = 0;
	int max = 10000;
	vector<vector<double>> Macierz_A;
	for (int i = 0; i < m; i++)
	{
		Macierz_A.push_back(randomVector(n, min, max));
	}
	return Macierz_A;
}
void displayMatrix(const vector<vector<double>> & V)
{
	int n = 15;//rezerwacja miejsc dla liczby
	for (int i = 0; i < V[0].size(); i++)
	{
		print(V[i],n);
	}
}
void Zadanie7()
{
	using Macierz = vector<vector<double>>;
	//Tworzac macierz zwracamy ja przez wartosc natomiast aby wyswietlenie macierzy bylo bezpieczne 
	//wyswietlamy ja z parametrem const
	cout << "Zadanie 7" << endl;
	cout << "Podaj wymiary m i n macierzy: " << endl;
	int m, n; cin >> m >> n;
	//Uzywanie aliasow pozwala skrocic zapis kodu oraz zwieksza czytelnosc kodu 
	Macierz A = createMatrix(m, n);
	displayMatrix(A);
}
double inv(double x)
{
	return 1.0 / x;
}
double inv_square(double x)
{
	return 1.0 / (x*x);
}
void forEach(vector<vector<double>> &m, double (&fun)(double))
{
	for (int i = 0; i < m.size(); i++)
	{
		for (int j = 0; j < m[i].size(); j++)
		{
			m[i][j] = fun(m[i][j]);
		}
	}
}
void print(const vector<double> &v, int n)
{
	for (double i : v)
	{
		cout << setw(n) << i << setw(n);
	}
	cout << endl;
}
void Zadanie8()
{
	cout << "Zadanie 8 " << endl;
	using Macierz = vector<vector<double>>;
	cout << "Podaj wymiary m i n macierzy: " << endl;
	int m, n; cin >> m >> n;
	Macierz A = createMatrix(m, n);
	displayMatrix(A);
	forEach(A, sqrt);
	displayMatrix(A);
}
#include<iostream>
#include<string>
#include<vector>
#include<time.h>
#include<array>
#include<cctype>
using namespace std;
void Zadanie1();
void print(vector<int> v);
void Zadanie2();
template<typename T>
T sum(vector<T> v);
float average(vector<float> v);
array<float, 2> minmax(vector<float> v);
void print(vector<float> v);
void Zadanie3();
vector<int> randomVector(unsigned int size, int min, int max);
void Zadanie4();
vector<int> multiplyVector(vector<int> a, vector<int> b);
void Zadanie5();
void Zadanie6();
string Odwroc(string text);
void Zadanie7();
vector<vector<int>> Dodawanie(vector<vector<int>> A, vector<vector<int>> B);
vector<vector<int>> Odejmowanie(vector<vector<int>> A, vector<vector<int>> B);
void Zadanie8();
vector<vector<int>> Mnozenie(vector<vector<int>> A, vector<vector<int>> B);
void Zadanie9();
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
		case 9:
		{
			Zadanie9();
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
	const int rozmiar = 100;
	int Tablica[rozmiar];
	int suma = 0;
	for (int i = 0; i < rozmiar; i++)
	{
		Tablica[i] = i + rozmiar;
		suma += Tablica[i];
	}
	cout << "Suma wynosi: " << suma << endl;
}
void print(vector<int> v)
{
	for (int i : v)
	{
		cout << i << " ";
	}
	cout << endl;
}
void Zadanie2()
{
	cout << "Zadanie 2" << endl;
	const int rozmiar = 10;
	vector<int> Tablica(rozmiar);
	for (int &i : Tablica)
	{
		i = rand()%rozmiar;
	}
	print(Tablica);
}
template<typename T>
T sum(vector<T> v)
{
	T sum = 0;
	for (T i : v)
		sum += i;
	return sum;
}
float average(vector<float> v)
{
	return sum(v) / v.size();
}
array<float, 2> minmax(vector<float> v)
{
	array<float, 2> temp;
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
void print(vector<float> v)
{
	for (float i : v)
	{
		cout << i << " ";
	}
	cout << endl;
}
void Zadanie3()
{
	cout << "Zadanie 3" << endl;
	cout << "Podaj ile liczb chcesz wprowadzic do tablicy?" << endl;
	int n; cin >> n;
	float t;
	vector<float> Tablica(n);
	for (int i = 0; i < n; i++)
	{
		cout << "Podaj jaka wartosc wpisac do tablicy na pozycje " << i + 1 << endl;
		cin >> t;
		Tablica.at(i) = t;
	}
	print(Tablica);
	cout << "Suma tablicy wynosi: " << sum(Tablica) << endl;
	cout << "Srednia tablicy wynosi: " << average(Tablica) << endl;
	minmax(Tablica);
	cout << "Najmniejszy element tablicy wynosi: " << minmax(Tablica).at(0) << endl;
	cout << "Najwiekszy element tablicy wynosi: " << minmax(Tablica).at(1) << endl;
}
vector<int> randomVector(unsigned int size, int min, int max)
{
	vector<int> temp(size);
	for (int i = 0; i < size; i++)
	{
		temp.at(i) = rand() % (max - min) + min;
	}
	return temp;
}
void Zadanie4()
{
	cout << "Zadanie 4" << endl;
	cout << "Podaj dlugosc wektora: " << endl;
	unsigned int size; cin >> size;
	cout << "Podaj dolny przedzial: " << endl;
	int min; cin >> min;
	cout << "Podaj gorny zakres: " << endl;
	int max; cin >> max;
	print(randomVector(size, min, max));
}
vector<int> multiplyVector(vector<int> a, vector<int> b)
{
	vector<int> temp;
	if (a.size() == b.size())
	{
		for (int i = 0; i < a.size(); i++)
		{
			temp.push_back(a[i] * b[i]);
		}
		return temp;
	}
	else
	{
		cout << "Wektory nie sa rowne zwracam pusty wektor" << endl;
		return temp;
	}
}
void Zadanie5()
{
	cout << "Zadanie 5" << endl;
	int min = 3;
	int max = 27;
	cout << "Podaj dlugosc dla dwoch wektorow:" << endl;
	int size; cin >> size;
	vector<int> w1(size); 
	w1 = randomVector(size, min, max);
	cout << "Wektor 1" << endl;
	print(w1);
	vector<int> w2(size);
	w2 = randomVector(size, min, max);
	cout << "Wektor 2" << endl;
	print(w2);
	vector<int> w3(size);
	w3 = multiplyVector(w1, w2);
	cout << "Pomnozone wektory" << endl;
	print(w3);
	cout << "Iloczyn kartezjanski dwoch wektorow wynosi: " << sum(w3) << endl;
}
void Zadanie6()
{
	cout << "Zadanie 6" << endl;
	cout << "Wpisz dowolny napis: " << endl;
	string text;
	getchar();
	getline(cin, text);
	cout << "Wczytalem nastepujacy tekst: " << endl;
	cout << text << endl;
	cout << "Zamieniam litery male na duze a duze na male: " << endl;
	for (int i = 0; i < text.size(); i++)
	{
		if (islower(text[i]))
		{
			text[i] = toupper(text[i]);
		}
		else
		{
			text[i] = tolower(text[i]);
		}
	}
	cout << text << endl;
	cout << "Zamieniam tekst na wielkie litery: " << endl;
	for (int i = 0; i < text.size(); i++)
	{
		text[i]=toupper(text[i]);
	}
	cout << text << endl;
	cout << "Zamieniam tekst na male litery: " << endl;
	for (int i = 0; i < text.size(); i++)
	{
		text[i] = tolower(text[i]);
	}
	cout << text << endl;
}
string Odwroc(string text)
{
	string temp;
	for (int i = text.size() - 1; i >= 0; i--)
	{
		temp += text[i];
	}
	return temp;
}
void Zadanie7()
{
	cout << "Zadanie 7" << endl;
	cout << "Wpisz dowolny napis: " << endl;
	string text;
	getchar();
	getline(cin, text);
	cout << "Wczytalem nastepujacy tekst: " << endl;
	cout << text << endl;
	string temp;
	for (int i = 0; i < text.size(); i++)
	{
		if (isspace(text[i]) || !isalpha(text[i]))
		{
		}
		else
		{
			if (isupper(text[i]))
			{
				text[i] = tolower(text[i]);
			}
			temp+= text[i];
		}
	}
	bool warunek = true;
	for (int i = 0; i < temp.size(); i++)
	{
		if (temp.size() - 1)
		{
			if (temp[i] != temp[temp.size() - i - 1])
			{
				warunek = false;
				break;
			}
		}
	}
	if (warunek && (temp.size() - 1) % 2)
	{
		cout << "Palidrom parzysty" << endl;
	}
	else if(warunek)
	{
		cout << "Palidrom nieparzysty" << endl;
	}
	else
	{
		cout << "Ciag nie jest palidromem" << endl;
	}
	cout << "Odwrocony tekst: " << endl;
	cout << Odwroc(text) << endl;
}
void Zadanie8()
{
	cout << "Zadanie 8" << endl;
	int min = -16;
	int max = -4;
	cout << "Podaj wymiary pierwszej macierzy m x n: " << endl;
	int mA, nA; cin >> mA >> nA;
	vector<vector<int>> Macierz_A;
	cout << "Podaj wymiary drugiej macierzy m x n: " << endl;
	int mB, nB; cin >> mB >> nB;
	vector<vector<int>> Macierz_B;
	for (int i = 0; i < nA; i++)
	{
		Macierz_A.push_back(randomVector(mA, min, max));
	}
	for (int i = 0; i < nB; i++)
	{
		Macierz_B.push_back(randomVector(mB, min, max));
	}
	cout << "Macierz A" << endl;
	for (int i = 0; i < nA; i++)
	{
		print(Macierz_A[i]);
	}
	cout << "Macierz B" << endl;
	for (int i = 0; i < nB; i++)
	{
		print(Macierz_B[i]);
	}
	vector<vector<int>> Macierz_C = Dodawanie(Macierz_A, Macierz_B);
	cout << "Dodawanie Macierzy A i Macierzy B" << endl;
	for (int i = 0; i < Macierz_C.size(); i++)
	{
		if (mA > mB)
		{
			Macierz_C[i].resize(mA);
		}
		else
		{
			Macierz_C[i].resize(mB);
		}
		print(Macierz_C[i]);
	}
	vector<vector<int>> Macierz_D = Odejmowanie(Macierz_A, Macierz_B);
	cout << "Odejmowanie Macierzy A i Macierzy B" << endl;
	for (int i = 0; i < Macierz_D.size(); i++)
	{
		if (mA > mB)
		{
			Macierz_C[i].resize(mA);
		}
		else
		{
			Macierz_C[i].resize(mB);
		}
		print(Macierz_D[i]);
	}
}
vector<vector<int>> Dodawanie(vector<vector<int>> A, vector<vector<int>> B)
{
	int sizeA = A.size();
	int sizeB = B.size();
	int zakres;
	if (sizeA > sizeB)
	{
		zakres = sizeA;
		B.resize(zakres);
	}
	else
	{
		zakres = sizeB;
		A.resize(zakres);
	}
	int sizeAa = A[0].size();
	int sizeBb = B[0].size();
	int zakres2;
	if (sizeAa > sizeBb)
	{
		zakres2 = sizeAa;
	}
	else
	{
		zakres2 = sizeBb;
	}
	vector<vector<int>> C;
	for (int i = 0; i < zakres; i++)
	{
		C.push_back(vector<int>(zakres2));
		A[i].resize(zakres2);
		B[i].resize(zakres2);
		for (int j = 0; j < zakres2; j++)
		{
			C[i][j] = A[i][j] + B[i][j];
		}
	}
	return C;
}
vector<vector<int>> Odejmowanie(vector<vector<int>> A, vector<vector<int>> B)
{
	int sizeA = A.size();
	int sizeB = B.size();
	int zakres;
	if (sizeA > sizeB)
	{
		zakres = sizeA;
		B.resize(zakres);
	}
	else
	{
		zakres = sizeB;
		A.resize(zakres);
	}
	int sizeAa = A[0].size();
	int sizeBb = B[0].size();
	int zakres2;
	if (sizeAa > sizeBb)
	{
		zakres2 = sizeAa;
	}
	else
	{
		zakres2 = sizeBb;
	}
	vector<vector<int>> C;
	for (int i = 0; i < zakres; i++)
	{
		C.push_back(vector<int>(zakres2));
		A[i].resize(zakres2);
		B[i].resize(zakres2);
		for (int j = 0; j < zakres2; j++)
		{
			C[i][j] = A[i][j] - B[i][j];
		}
	}
	return C;
}
void Zadanie9()
{
	//Bledne zakresy dla macierzy nie kwadratowych
	cout << "Zadanie 9" << endl;
	int min = 1;
	int max = 14;
	int mA, nA;
	int mB, nB;
	int warunek = false;
	vector<vector<int>> Macierz_A;
	vector<vector<int>> Macierz_B;
	do
	{
		if (warunek)
		{
			cout << "Podales zle wymiary dla mnozenia macierzy!!!" << endl;
		}
		cout << "Podaj wymiary pierwszej macierzy m x n: " << endl;
		cin >> mA >> nA;
		cout << "Podaj wymiary drugiej macierzy m x n: " << endl;
		cin >> mB >> nB;
		warunek = true;
	} while (nA != mB);
	for (int i = 0; i < nA; i++)
	{
		Macierz_A.push_back(randomVector(mA, min, max));
	}
	for (int i = 0; i < nB; i++)
	{
		Macierz_B.push_back(randomVector(mB, min, max));
	}
	cout << "Macierz A" << endl;
	for (int i = 0; i < nA; i++)
	{
		print(Macierz_A[i]);
	}
	cout << "Macierz B" << endl;
	for (int i = 0; i < nB; i++)
	{
		print(Macierz_B[i]);
	}
	vector<vector<int>> Macierz_C = Mnozenie(Macierz_A, Macierz_B);
	cout << "Mnozenie Macierzy A i Macierzy B" << endl;
	for (int i = 0; i < Macierz_C.size(); i++)
	{
		if (mA > mB)
		{
			Macierz_C[i].resize(mA);
		}
		else
		{
			Macierz_C[i].resize(mB);
		}
		print(Macierz_C[i]);
	}
}
vector<vector<int>> Mnozenie(vector<vector<int>> A, vector<vector<int>> B)
{
	int sizeA = A.size();
	int sizeB = B.size();
	vector<vector<int>> C;
	int s;
	for (int i = 0; i < sizeA; i++)
	{
		C.push_back(vector<int>(B[i].size()));
		for (int j = 0; j < B[i].size(); j++)
		{
			s = 0;
			for (int k = 0; k < sizeB; k++) 
				s += A[i][k] * B[k][j];
			C[i][j] = s;
		}
	}
	return C;
}
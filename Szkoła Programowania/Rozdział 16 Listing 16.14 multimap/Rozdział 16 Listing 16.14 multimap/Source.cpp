#include<iostream>
#include<string>
#include<map>
#include<algorithm>
typedef int KeyType;
typedef std::pair<const KeyType, std::string> Pair;
typedef std::multimap<KeyType, std::string> Mapcode;
int main()
{
	using namespace std;
	Mapcode codes;
	codes.insert(Pair(41, "Butom"));
	codes.insert(Pair(81, "Gdynia"));
	codes.insert(Pair(81, "Sopot"));
	codes.insert(Pair(27, "Starachowice"));
	codes.insert(Pair(41, "Rybnik"));
	codes.insert(Pair(27, "Sandomierz"));
	cout << "Liczba miast z regionu o kodzie 27: " << codes.count(27) << endl;
	cout << "Liczba miast z regionu o kodzie 41: " << codes.count(41) << endl;
	cout << "Liczba miast z regionu o kodzie 81: " << codes.count(81) << endl;
	cout << "Kod regionu\tMiasto\n";
	Mapcode::iterator it;
	for (it = codes.begin(); it != codes.end(); ++it)
		cout << "\t" << (*it).first << "\t" << (*it).second << endl;
	pair<Mapcode::iterator, Mapcode::iterator> range = codes.equal_range(81);
	cout << "Miasta z regionu o kodzie 81:\n";
	for (it = range.first; it != range.second; ++it)
		cout << (*it).second << endl;
	system("pause");
	return 0;
}
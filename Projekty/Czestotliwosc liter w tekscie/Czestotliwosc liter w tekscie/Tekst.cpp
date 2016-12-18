#include "Tekst.h"
Tekst::Tekst(std::wstring name):name_of_file(name)
{
}
Tekst::~Tekst()
{

}
void Tekst::Analyze()
{
	wifstream file;

	file.imbue(locale("Polish_poland.1250"));
	wstring namefile = name_of_file + L".txt";

	file.open(namefile.c_str());

	if (!file.is_open())
	{
		wcout << L"Nie udalo sie otworzyc pliku o nazwie: " << name_of_file << L'\n';

		system("pause");
		exit(EXIT_FAILURE);
	}

	wchar_t znak;

	while (file >> znak)
	{
		if (isalpha(znak, file.getloc())) // <--- funkcja z <locale> a nie z <ctype.h>
		{
			znak = tolower(znak, file.getloc()); // <--- jw.
			Alfabet[znak]++;	
			
		}
	}
}
void Tekst::Show()
{
	wcout << L"Symbol\tIloœæ" << endl;
	for (map<wchar_t, int>::iterator i = Alfabet.begin(); i != Alfabet.end(); i++)
	{
		wcout << setw(5) << i->first << "\t" << setw(5) << i->second << endl;
	}

}
void Tekst::Save()
{
	wofstream file;
	file.imbue(locale("Polish_poland.1250"));
	wstring name = name_of_file + L" - analiza.txt";
	file.open(name.c_str());
	if (!file.is_open())
	{
		wcout << "Nie udalo sie otworzyc pliku o nazwie: " << name_of_file << endl;
		wcout << "Byla to proba zapisu do pliku" << endl;
		system("pause");
		exit(EXIT_FAILURE);
	}
	file << L"Symbol\tIloœæ" << endl;
	for (auto i : Alfabet)
	{
		file << setw(5) << i.first << "\t" << setw(5) << i.second << endl;
	}
	wcout << L"Nast¹pi³ zapis do pliku" << endl;
}
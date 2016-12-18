#include"Tekst.h"

int main()
{
	wcout.imbue(locale("Polish_poland.852"));
	Tekst T(L"test1");
	T.Analyze();
	T.Show();
	T.Save();
	system("pause");
	return 0;
}
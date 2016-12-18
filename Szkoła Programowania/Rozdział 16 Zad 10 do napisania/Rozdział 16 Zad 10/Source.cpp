#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<memory>
using namespace std;
struct Review
{
	std::string title;
	int price;
	int rating;
};
bool operator<(const Review & r1, const Review & r2);
bool worseThan(const Review & r1, const Review & r2);
bool FillReview(Review & rr);
void ShowReview(const Review & rr);
int main()
{
	vector<shared_ptr<Review>> books;
	Review temp;
	while (FillReview(temp))
		books.push_back(temp);
	if (books.size() > 0)
	{
		cout << "Dziekuje. Podales " << books.size() << " ocen ksiazek:\n" << "Ocena\tKsiazka\n";
		for_each(books.begin(), books.end(), ShowReview);
		sort(books.begin(), books.end());
		cout << "Posortowane wedlug tytulu:\nOcena\tKsiazka\n";
		for_each(books.begin(), books.end(), ShowReview);
		sort(books.begin(), books.end(), worseThan);
		cout << "Posortowane wedlug oceny:\nOcena\tKsiazka\n";
		for_each(books.begin(), books.end(), ShowReview);
		random_shuffle(books.begin(), books.end());
		cout << "Po wymienianiu:\nOcena\tKsiazka\n";
		for_each(books.begin(), books.end(), ShowReview);
	}
	else
		cout << "Brak danych.\n";
	system("pause");
	return 0;
}
bool operator<(const Review & r1, const Review & r2)
{
	if (r1.title < r2.title)
		return true;
	else if (r1.title == r2.title && r1.rating < r2.rating)
		return true;
	else
		return false;
}
bool worseThan(const Review & r1, const Review & r2)
{
	if (r1.rating < r2.rating)
		return true;
	else
		return false;
}
bool FillReview(Review & rr)
{
	cout << "Wpisz tytul ksiazki (koniec, aby zakonczyc): ";
	getline(cin, rr.title);
	if (rr.title == "koniec")
		return false;
	cout << "Wpisz ocene: ";
	cin >> rr.rating;
	cout << "Podaj cene: ";
	rr.price;
	if (!cin)
		return false;
	//pozbycie sie reszty danych wejsciowych
	while (cin.get() != '\n')
		continue;
	return true;
}
void ShowReview(const Review & rr)
{
	cout << rr.rating << "\t" << rr.title << endl;
}
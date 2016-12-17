#include "BSTree.h"
#include<iostream>
using namespace std;
void BSTree::inorder(std::unique_ptr<ElementDrzewa> pom) const
{
	if (pom->lewy != nullptr)
		inorder(std::move(pom->lewy));
	cout << pom->wartosc << endl;
	if (pom->prawy != nullptr)
		inorder(std::move(pom->prawy));
}
void BSTree::deleteAll(std::unique_ptr<ElementDrzewa> pom)
{
	if (pom->lewy) deleteAll(std::move(pom->lewy));
	if (pom->prawy) deleteAll(std::move(pom->prawy));
	//delete pom;
	pom = std::make_unique<ElementDrzewa>(nullptr);
}

void BSTree::clear()
{
	if (korzen) deleteAll(std::move(korzen));
	std::unique_ptr<ElementDrzewa>(korzen) = std::make_unique<ElementDrzewa>(nullptr);
}
BSTree::BSTree()
{
	std::unique_ptr<ElementDrzewa>(korzen) = std::make_unique<ElementDrzewa>(nullptr);
}
BSTree::~BSTree() 
{
	if (korzen) deleteAll(std::move(korzen));
	std::unique_ptr<ElementDrzewa>(korzen) = std::make_unique<ElementDrzewa>(nullptr);
}
bool BSTree::isEmpty()
{
	if (korzen == nullptr)
		return true;
	else
		return false;
}
void BSTree::insert(int liczba)
{
	if (korzen == nullptr)
	{
		korzen = std::make_unique<ElementDrzewa>(new ElementDrzewa(std::move(korzen), std::move(nullptr), std::move(nullptr), liczba));
		return;
	}
	std::unique_ptr<ElementDrzewa> p = make_unique<ElementDrzewa>(korzen);
	while (p)
	{
		if (p->wartosc >= liczba)
		{
			if (p->lewy == nullptr)
			{
				p->lewy = std::make_unique<ElementDrzewa>(new ElementDrzewa(std::move(p), std::move(nullptr), std::move(nullptr), liczba));
				return;
			}
			if (p->lewy)
				p = std::move(p->lewy);
		}
		else
		{
			if (p->prawy == nullptr)
			{
				p->prawy = std::make_unique<ElementDrzewa>(new ElementDrzewa(std::move(p), std::move(nullptr), std::move(nullptr), liczba));
				return;
			}
			if (p->prawy)
				p = std::move(p->prawy);
		}
	}
}
void BSTree::printInOrder()
{
	if (korzen == nullptr)
	{
		cout << "Drzewo jest puste" << endl;
	}
	else
	{
		std::unique_ptr<ElementDrzewa> p = std::move(korzen);
		inorder(std::move(p));
	}

}
bool BSTree::contains(int szukana) const
{
	std::unique_ptr<ElementDrzewa>(pom) = std::make_unique<ElementDrzewa>(korzen);
	while (pom)
	{
		if (pom->wartosc == szukana)
		{
			return true;
		}
		if (pom->wartosc <= szukana)
			pom = std::move(pom->prawy);
		else pom = std::move(pom->lewy);
	}
	return false;
}

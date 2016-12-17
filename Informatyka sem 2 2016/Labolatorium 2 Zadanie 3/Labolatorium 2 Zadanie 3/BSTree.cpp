#include "BSTree.h"
#include<iostream>
using namespace std;
void BSTree::inorder(ElementDrzewa* pom) const
{
	if (pom->lewy != NULL)
		inorder(pom->lewy);
	cout << pom->wartosc << endl;
	if (pom->prawy != NULL)
		inorder(pom->prawy);
}
void BSTree::deleteAll(ElementDrzewa* pom)
{
	if (pom->lewy) deleteAll(pom->lewy);
	if (pom->prawy) deleteAll(pom->prawy);
	delete pom;
	pom = NULL;
}

void BSTree::clear()
{
	if (korzen) deleteAll(korzen);
	korzen = NULL;
}
BSTree::BSTree()
{
	korzen = NULL;
}
BSTree::~BSTree() 
{
	if (korzen) deleteAll(korzen);
	korzen = NULL;
}
bool BSTree::isEmpty()
{
	if (korzen == NULL)
		return true;
	else
		return false;
}
void BSTree::insert(int liczba)
{
	if (korzen == NULL)
	{
		korzen = new ElementDrzewa(korzen, NULL, NULL, liczba);
		return;
	}
	ElementDrzewa* p = korzen;
	while (p)
	{
		if (p->wartosc >= liczba)
		{
			if (p->lewy == NULL)
			{
				p->lewy = new ElementDrzewa(p, NULL, NULL, liczba);
				return;
			}
			if (p->lewy)
				p = p->lewy;
		}
		else
		{
			if (p->prawy == NULL)
			{
				p->prawy = new ElementDrzewa(p, NULL, NULL, liczba);
				return;
			}
			if (p->prawy)
				p = p->prawy;
		}
	}
}
void BSTree::printInOrder()
{
	if (korzen == NULL)
	{
		cout << "Drzewo jest puste" << endl;
	}
	else
	{
		ElementDrzewa* p = korzen;
		inorder(p);
	}

}
bool BSTree::contains(int szukana) const
{
	ElementDrzewa* pom = korzen;
	while (pom)
	{
		if (pom->wartosc == szukana)
		{
			return true;
		}
		if (pom->wartosc <= szukana)
			pom = pom->prawy;
		else pom = pom->lewy;
	}
	return false;
}

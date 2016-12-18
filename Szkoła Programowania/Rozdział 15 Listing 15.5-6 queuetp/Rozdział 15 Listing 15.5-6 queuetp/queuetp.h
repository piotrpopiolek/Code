#pragma once
#ifndef QUEUETP_H_
#define QUEUETP_H_
template<class Item>
class QueueTP
{
	enum { Q_SIZE = 10 };
	//definicja klasy zagniezdzonej Node
	class Node
	{
	public:
		Item item;
		Node * next;
		Node(const Item & i) :item(i), next(nullptr)
		{

		}
	};
	Node * front; //wskaznik na przed kolejki
	Node * rear; //wskaznik na tyl kolejki
	int items; //aktualna liczba elementow w kolejce
	const int qsize; //maksymalna liczba elementow w kolejce
	QueueTP(const QueueTP & q) :qsize(0)
	{

	}
	QueueTP & operator=(const QueueTP & q)
	{
		return *this;
	}
public:
	QueueTP(int us = Q_SIZE);
	~QueueTP();
	bool isempty() const
	{
		return items == 0;
	}
	bool isfull() const
	{
		return items == qsize;
	}
	int queuecount() const
	{
		return items;
	}
	bool enqueue(const Item & item);
	bool dequeue(Item & item);
};
template<class Item>
QueueTP<Item>::QueueTP(int qs) :qsize(qs)
{
	front = rear = nullptr;
	items = 0;
}
template<class Item>
QueueTP<Item>::~QueueTP()
{
	Node * temp;
	while (front != 0)//dopoki kolejka nie jest pusta
	{
		temp = front;
		front = front->next;
		delete temp;
	}
}
template<class Item>
bool QueueTP<Item>::enqueue(const Item & item) //dodaje element na koniec kolejki
{
	if (isfull())
		return false;
	Node * add = new Node(item); //tworzy element
	items++;
	if (front == 0) //jesli kolejka pusta dodaje na poczatek
		front = add;
	else
		rear->next = add; //w przeciwnym razie dodaje na koniec
	rear = add; //koniec kolejki wskazuje na dodany element
	return true;
}
//umieszcza poczatkowy element w obiekcie item i usuwa z kolejki
template<class Item>
bool QueueTP<Item>::dequeue(Item & item)
{
	if (front == 0)
		return false;
	item = front->item; //ustawia item na pierwszy element kolejki
	items--;
	Node * temp = front; //zapisuje adres pierwszego elementu
	front = front->next; //ustawia poczatek na nastepny element
	delete temp; //usuwa poprzedni poczatek
	if (items == 0)
		rear = nullptr;
	return true;
}
#endif // !QUEUETP_H_

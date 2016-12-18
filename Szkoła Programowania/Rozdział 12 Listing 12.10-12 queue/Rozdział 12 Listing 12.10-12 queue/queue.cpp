#include<cstdlib>
#include "queue.h"
Queue::Queue(int qs):qsize(qs)
{
	front = rear = nullptr;
	items = 0;
}
Queue::~Queue()
{
	Node * temp;
	while (front != NULL)
	{
		temp = front; //zachowanie adresu elementu biezacego
		front = front->next; //przesuniecie wskaznika do elementu nastepnego
		delete temp; //zwolnienie elementu spod zapamietanego adresu
	}
}
bool Queue::isempty() const
{
	return items == 0;
}
bool Queue::isfull() const
{
	return items == qsize;
}
int Queue::queuecount() const
{
	return items;
}
bool Queue::enqueue(const Item & item) //dodaje element na koniec kolejki
{
	if (isfull())
		return false;
	Node * add = new Node; //utworzenie wezla
	add->item = item; //ustawienie wskaznikow wezlow
	add->next = nullptr;
	items++;
	if (front == NULL) //jesli kolejka jest pusta
		front = add; //umiesc element na czele listy
	else
		rear->next = add; //w przeciwnym wypadku dolacz do konca
	rear = add; //rear wskazuje teraz nowy wezel
	return true;
}
//kopiuje element czolowy kolejki do argumentu
bool Queue::dequeue(Item & item)
{
	if (front == NULL)
		return false;
	item = front->item; //skopiowanie do item pierwszego elementu z kolejki
	items--;
	Node * temp = front; //zachowanie polozenia pierwszego elementu
	front = front->next; 
	delete temp; //usuniecie dotychczasowego pierwszego elementu
	if (items == 0)
		rear = NULL;
	return true;
}
//metody kolejki
//kiedy klient trafia do kolejki, zapamietany jest biezacy czas systemowy,
//losowany jest tez czas obslugi klienta
//z zakresu od 1 do 3
void Customer::set(long when)
{
	processtime = std::rand() % 3 + 1;
	arrive = when;
}

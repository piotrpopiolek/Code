#pragma once
#ifndef QUEUE_H_
#define QUEUE_H_
class Customer
{
	long arrive;
	int processtime;
public:
	Customer()
	{
		arrive = processtime = 0;
	}
	void set(long when);
	long when() const
	{
		return arrive;
	}
	int ptime() const
	{
		return processtime;
	}
};
typedef Customer Item;
class Queue
{
	struct Node
	{
		Item item;
		struct Node * next;
	};
	enum
	{
		Q_SIZE = 10
	};
	Node * front; //wskaznik czola
	Node * rear; //wskaznik ogona
	int items;
	const int qsize;
	//definicje blokujace publiczny dostep do operacji kopiowania
	Queue(const Queue & q) :qsize(0)
	{

	}
	Queue & operator=(const Queue & q)
	{
		return *this;
	}
public:
	Queue(int qs = Q_SIZE);
	~Queue();
	bool isempty() const;
	bool isfull() const;
	int queuecount() const;
	bool enqueue(const Item & item); //dodaje element na koniec kolejki
	bool dequeue(Item & item); //wyciaga element z czola kolejki
};
#endif // !QUEUE_H_


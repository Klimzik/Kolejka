#include <iostream>
#include "klasa.h"
using namespace std;

void Queue::add(Dataa*& last, Dataa*& first, int& counter)
{
	Dataa* newest = new Dataa;
	counter++;
	if (counter == 1)
		first = newest;
	else
		last->next = newest;
	last = newest;
	last->next = nullptr;
	cout << "Podaj liczbe: ";
	cin >> newest->a;
}

void Queue::show(Dataa*& first)
{
	Dataa* kolejny{ first };
	int i{ 0 };
	while (kolejny != nullptr)
	{
		cout << endl << ++i << ".  Liczba: " << kolejny->a << endl;
		kolejny = kolejny->next;
	}
}

void Queue::remove_all(Dataa*& first, int& counter)
{
	if (counter == 0)
		return;
	Dataa* usuwany{ nullptr };
	int a{ 0 };					 // a - numer usuwanego elemntu
	for (int i{ 0 }; i < counter;)
	{
		usuwany = first;
		counter--;
		first = first->next;
		delete usuwany;
	}
}

void Queue::remove(Dataa*& first, int& counter)
{
	if (counter == 0)
		return;
	counter--;
	Dataa* usuwany{ first };
	first = first->next;
	delete usuwany;
}
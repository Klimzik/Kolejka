#include <iostream>
#include "klasa.h"
using namespace std;


int main()
{
	Queue my_queue;
	int choice{ 0 };
	while (1)
	{
		cout << "\n1 - dodanie elemntu na koniec kolejki\n2 - wyswietlanie\n3 - usuniecie elementu na poczatku kolejki\n4 - usuniecie wszytkich elementow kolejki\nwybor: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			my_queue.add(my_queue.last_, my_queue.first_, my_queue.counter_);
			break;
		}
		case 2:
		{
			my_queue.show(my_queue.first_);
			break;
		}
		case 3:
		{
			my_queue.remove(my_queue.first_, my_queue.counter_);
			break;
		}
		case 4:
		{
			my_queue.remove_all(my_queue.first_, my_queue.counter_);
			break;
		}
		}
	}
}
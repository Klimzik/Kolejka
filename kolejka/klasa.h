#include <iostream>
using namespace std;

class Dataa {
public:
	int a{ 0 };
	Dataa* next{ nullptr };
};

class Queue {
public:
	Dataa* first_{ nullptr }, * last_{ nullptr };
	int counter_{ 0 };
	void add(Dataa*& last, Dataa*& first, int& counter);
	void remove(Dataa*& first, int& counter);
	void show(Dataa*& first);
	void remove_all(Dataa*& first, int& counter);
};
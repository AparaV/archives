// List.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

class list_element {
public:
	list_element(int d = 0, list_element* ptr = nullptr):
		d(d),next(ptr){}
	int d;
	list_element* next;
};

class list {
public:
	list() :head(nullptr), cursor(nullptr) {}; // default constructor
	list(const list& lst); //deep copy constructor
	void prepend(int n); // add to front-end
	int get_element() { return cursor->d; }
	list_element* gethead() { return head; };
	void advance() { cursor = cursor->next; }
	void print();
	void print2(list_element* head); //using recursion
	~list(); //destructor
private:
	list_element* head;
	list_element* cursor;
};

list::list(const list& lst) {
	if (lst.head == nullptr)
		head = cursor = nullptr;
	else {
		cursor = lst.head;
		list_element* h = new list_element();
		list_element* previous;
		head = h;
		h->d = lst.head->d;
		previous = h;
		cursor = cursor->next;
		while ( cursor != nullptr ) {
			h = new list_element();
			h->d = cursor->d;
			previous->next = h;
			cursor = cursor->next;
			previous = h;
		}
		cursor = head;
	}
}

list::~list() {
	cout << "Destructor evoked!" << endl;
	for (cursor = head; cursor != nullptr; ) {
		cursor = cursor->next;
		delete head;
		head = cursor;
	}
}

void list::prepend(int n) {
	if (head == nullptr) //empty list
		head = cursor = new list_element(n, head);
	else // add to front-end
		head = new list_element(n, head);
}

void list::print() {
	list_element* h = head;
	while (h != nullptr) {
		cout << h->d << ", ";
		h = h->next;
	}
	cout << "###" << endl;
}

void list::print2(list_element* h) {
	if (h == nullptr)
		cout << "###" << endl;
	else {
		cout << h->d << ", ";
		print2(h->next);
	}
}

ostream& operator<< (ostream& out, list x) {
	list_element* h = x.gethead();
	while (h != nullptr) {
		out << h->d << ", ";
		h = h->next;
	}
	out << "###" << endl;
	return out;
}


int main()
{
	list a, b;
	a.prepend(3); a.prepend(5);
	a.print();
	for (int i = 0; i < 10; ++i)
		b.prepend(i*i);
	b.print2(b.gethead());
	cout << b << endl;

	list c(b);
	cout << c << endl;
    return 0;
}


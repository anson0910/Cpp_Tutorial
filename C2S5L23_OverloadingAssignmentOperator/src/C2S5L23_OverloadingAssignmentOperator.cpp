//============================================================================
// Name        : C2S5L23_OverloadingAssignmentOperator.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Person {
private:
	int id;
	string name;

public:
	Person() :
			id(0), name("") {
	}

	Person(int id, string name) :
			id(id), name(name) {
	}

	Person(const Person &other) :
			id(other.id), name(other.name) {
		cout << "Copy constructor called.\n";
		/*
		 * If want to behave like assignment,
		 * could simply use:
		 * *this = other;
		 */
	}

	void print() {
		cout << id << ": " << name << endl;
	}

	const Person &operator=(const Person &other) {
		cout << "Assignment running.\n";
		id = other.id;
		name = other.name;
		return *this;
	}
};


int main() {
	Person p1(10, "Mike");
	cout << "Print p1: ";
	p1.print();

	Person p2(20, "Bob");
	p2 = p1;		// assignment
	cout << "Print p2: ";
	p2.print();

	Person p3;
	p3.operator=(p1);	// assignment
	cout << "Print p3: ";
	p3.print();

	Person p4 = p1;		// copy constructor
	cout << "Print p4: ";
	p4.print();

	return 0;
}

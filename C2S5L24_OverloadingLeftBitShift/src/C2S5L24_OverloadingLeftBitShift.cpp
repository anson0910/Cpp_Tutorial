//============================================================================
// Name        : C2S5L24_OverloadingLeftBitShift.cpp
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

	const Person &operator=(const Person &other) {
		cout << "Assignment running.\n";
		id = other.id;
		name = other.name;
		return *this;
	}

	friend ostream &operator<<(ostream &out, const Person &person) {
		out << person.id << ": " << person.name;
		return out;
	}


};


int main() {
	Person p1(10, "Mike");
	Person p2(20, "Bob");

	cout << p1 << p2 << endl;

	return 0;
}

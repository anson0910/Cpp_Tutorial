//============================================================================
// Name        : C1S5L47_.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

/**
 * Default copy constructors only perform shallow copies
 * (copied pointers will point to same memory instead of allocating new memory)
 */
class Animal {
private:
	static int ID;
	const int id;
	string name;

public:
	Animal() : id(ID++) { cout << "Constructor called.\n"; }

	Animal(const Animal &other) : id(ID++), name(other.name) {
		cout << "Copy constructor called.\n";
	}

	~Animal() {
		cout << "Destructor called.\n";
	}

	void setName(string name) { this->name = name; }

	void speak() const {
		cout << "My id is " << id << ", my name is " + name << endl;
	}
};

int Animal::ID = 1;


int main() {

	Animal a1;
	a1.setName("Alex");

	Animal a2 = a1;
	a2.speak();
	a2.setName("Bob");

	a1.speak();
	a2.speak();

	Animal a3(a1);
	a3.speak();

	return 0;
}

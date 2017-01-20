//============================================================================
// Name        : C1S5L47_.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

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
	Animal *pCat1 = new Animal();
	pCat1->setName("Alex");
	pCat1->speak();
	delete pCat1;
	return 0;
}

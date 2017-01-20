//============================================================================
// Name        : C1S5L50_AllocatingMemory.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Animal {
private:
	string name;

public:
	Animal() { cout << "Constructor called.\n"; }

	Animal(const Animal &other) : name(other.name) {
		cout << "Copy constructor called.\n";
	}

	~Animal() {
		cout << "Destructor called on " + name << ".\n";
	}

	void setName(string name) { this->name = name; }

	void speak() const {
		cout << "My name is " + name << endl;
	}
};


Animal *getAnimals() {
	Animal *pAnimal = new Animal[26];
	for (int i = 0; i < 26; i++) {
		pAnimal[i].setName(string(1, 'a' + i));
		pAnimal[i].speak();
	}
	return pAnimal;
}


int main() {
	Animal *pAnimal = getAnimals();
	delete [] pAnimal;
	return 0;
}

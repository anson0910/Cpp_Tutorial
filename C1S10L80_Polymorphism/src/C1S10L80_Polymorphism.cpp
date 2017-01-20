//============================================================================
// Name        : C1S10L80_Polymorphism.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Animal {
public:
	virtual void speak() = 0;
	virtual ~Animal() { cout << "Animal destroyed.\n"; }
};

class Cat: public Animal {
public:
	virtual void speak() { cout << "RRRRR\n"; };
	virtual ~Cat() { cout << "Cat destroyed.\n"; }
};

class HouseCat: public Cat {
public:
	virtual void speak();
	virtual ~HouseCat() {cout << "HouseCat destroyed.\n"; }
};

void HouseCat::speak() { cout << "Meow\n"; };


int main() {
	Animal *pAnimal = new HouseCat();
	pAnimal->speak();
	delete pAnimal;
	return 0;
}

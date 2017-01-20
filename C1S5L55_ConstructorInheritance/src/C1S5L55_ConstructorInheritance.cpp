//============================================================================
// Name        : C1S5L55_ConstructorInheritance.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Machine {
private:
	int id;

public:
	Machine(): id(0) { cout << "Machine no-argument constructor called.\n"; }
	Machine(int id): id(id) { cout << "Machine parameterized constructor called.\n"; }
	void printInfo() { cout << "ID: " << id << endl; }
};

class Vehicle: public Machine {
public:
	Vehicle() { cout << "Vehicle no-argument constructor called.\n"; }
	Vehicle(int id): Machine(id) { cout << "Vehicle parameterized constructor called.\n"; }
};

class Car: public Vehicle {
public:
	Car(): Vehicle(999) { cout << "Car no-argument constructor called.\n"; }
};


int main() {
	Vehicle v(123);
	v.printInfo();

	Car car;
	car.printInfo();
	return 0;
}

//============================================================================
// Name        : C2S4L16_MapsCustomObjects.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <map>
using namespace std;

class Person {
private:
	string name;
	int age;

public:
	Person() :
			name(""), age(0) {
		cout << "No params constructor called.\n";

	}

	Person(string name, int age) :
			name(name), age(age) {
		cout << "params constructor called.\n";
	}

	Person(const Person &other) {
		cout << "Copy constructor called.\n";
		name = other.name;
		age = other.age;
	}

	void print() {
		cout << name << ": " << age << endl;
	}

};


int main() {
	map<int, Person> people;
	people[50] = Person("Mike", 40);
	people[32] = Person("Raj", 20);
	people[1] = Person("Vicky", 30);

	people.insert(make_pair(55, Person("Bob", 45)));

	for (map<int, Person>::iterator it = people.begin(); it != people.end();
			it++) {
		cout << it->first << ": ";
		it->second.print();
	}
	return 0;
}

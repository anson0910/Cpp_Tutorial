//============================================================================
// Name        : C2S4L17_MapsCustomObjectsAsKeys.cpp
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
	}

	Person(string name, int age) :
			name(name), age(age) {
	}

	Person(const Person &other) {
		name = other.name;
		age = other.age;
	}

	void print() const {
		cout << name << ": " << age << endl;
	}

	/*
	 * To use custom object as key, you must overload <,
	 * since maps in C++ are sorted.
	 */
	bool operator<(const Person &other) const {
		if (name == other.name)
			return age < other.age;
		return name < other.name;
	}
};


int main() {
	map<Person, int> people;
	people[Person("Mike", 40)] = 40;
	people[Person("Raj", 20)] = 20;
	people[Person("Vicky", 30)] = 30;

	people.insert(make_pair(Person("Mike", 444), 40));

	for (map<Person, int>::iterator it = people.begin(); it != people.end();
			it++) {
		cout << it->second << ": ";
		it->first.print();
	}
	return 0;
}

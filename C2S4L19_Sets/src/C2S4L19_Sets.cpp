//============================================================================
// Name        : C2S4L19_Sets.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <set>
using namespace std;

class Person {
private:
	int id;
	string name;
public:
	Person() :
			id(0), name("") {
	}

	Person(const Person &other) :
			id(other.id), name(other.name) {
	}

	Person(int id, string name) :
			id(id), name(name) {
	}

	void print() const {
		cout << id << ": " << name << endl;
	}

	bool operator<(const Person &other) const {
		return id< other.id;
	}
};

int main() {
	set<int> nums;
	nums.insert(50);
	nums.insert(10);
	nums.insert(30);
	nums.insert(30);
	nums.insert(20);

	cout << nums.size() << endl << endl;  // outputs 4

	for (set<int>::const_iterator it = nums.begin(); it != nums.end(); it++)
		cout << *it << endl;

	// 2 ways to find if element exists in set:
	set<int>::const_iterator it = nums.find(30);
	if (it != nums.end())
		cout << "Found: " << *it << endl;

	if (nums.count(30))
		cout << "Number found.\n\n";


	// ===== Custom Object =======
	set<Person> people;
	people.insert(Person(10, "Mike"));
	people.insert(Person(30, "Joe"));
	people.insert(Person(333, "Joe"));
	people.insert(Person(20, "Sue"));
	people.insert(Person(20, "What"));

	for (set<Person>::const_iterator it = people.begin(); it != people.end(); it++)
		it->print();
	return 0;
}

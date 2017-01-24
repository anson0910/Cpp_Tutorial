//============================================================================
// Name        : C2S4L21_SortingVectorsAndFriend.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

class Person {
private:
	int id;
	string name;

public:
	Person(int id, string name) :
			id(id), name(name) {
	}

	void print() {
		cout << id << ": " << name << endl;
	}

/*	bool operator<(const Person &other) const{
		if (name == other.name)
			return id < other.id;
		return name < other.name;
	}*/
	friend bool comp(const Person &p1, const Person &p2);
};

bool comp(const Person &p1, const Person &p2) {
	if (p1.name == p2.name)
		return p1.id < p2.id;
	return p1.name < p2.name;
}


int main() {
	vector<Person> people;
	people.push_back(Person(5, "Mike"));
	people.push_back(Person(2, "Mike"));
	people.push_back(Person(10, "Sue"));
	people.push_back(Person(7, "Raj"));

	// sort(people.begin(), people.end());
	sort(people.begin(), people.end(), comp);

	for (int i = 0; i < people.size(); i++)
		people[i].print();
	return 0;
}

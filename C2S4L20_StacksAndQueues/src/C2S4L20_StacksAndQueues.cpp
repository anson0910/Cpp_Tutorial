//============================================================================
// Name        : C2S4L20_StacksAndQueues.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stack>
#include <queue>
using namespace std;

class Person {
private:
	string name;

public:
	Person() :
			name("") {
	}

	Person(const Person &other) :
			name(other.name) {
	}

	Person(string name) :
			name(name) {
	}

	void print() const {
		cout << name << endl;
	}
};


int main() {
	// Stack : LIFO
	stack<Person> testStack;
	testStack.push(Person("Mike"));
	testStack.push(Person("John"));
	testStack.push(Person("Sue"));

	/*
	 * This is invalid code, object is destroyed
	Person &p = testStack.top();
	testStack.pop();
	p.print();		// Reference refers to destroyed object
	*/

	while (testStack.size() > 0) {
		Person &p = testStack.top();
		p.print();
		testStack.pop();
	}
	cout << endl;



	// Queue : FIFO
	queue<Person> q;
	q.push(Person("Mike"));
	q.push(Person("John"));
	q.push(Person("Sue"));

	q.back().print();	// outputs Sue
	cout << endl;

	while (q.size() > 0) {
		Person &p = q.front();
		p.print();
		q.pop();
	}

	return 0;
}

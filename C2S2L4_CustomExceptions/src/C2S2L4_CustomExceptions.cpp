//============================================================================
// Name        : C2S2L4_CustomExceptions.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <exception>

using namespace std;

class MyException: public exception {
public:
	// throw() at end of function means this function should not throw exceptions
	virtual const char* what() const throw() {
		return "Something bad happened!";
	}
};

class Test {
public:
	static void goesWrong() {
		throw MyException();
	}
};


int main() {
	Test t;
	try {
		t.goesWrong();
	} catch(exception &e) {
		cout << e.what() << endl;
	}

	return 0;
}

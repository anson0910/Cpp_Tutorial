//============================================================================
// Name        : C2S2L3_StandardExceptions.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class CanGoWrong {
public:
	CanGoWrong() {
		char *ptr = new char[9999999999999999];
		delete [] ptr;
	}
};

int main() {
	try {
		CanGoWrong wrong;
	} catch (bad_alloc &e) {
		cout << "Caught exception: " << e.what() << endl;
	}

	cout << "Still running.\n";

	return 0;
}

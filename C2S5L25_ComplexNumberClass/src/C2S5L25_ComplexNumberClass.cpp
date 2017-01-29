//============================================================================
// Name        : C2S5L25_ComplexNumberClass.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Complex.h"

using namespace std;
using namespace ansonyu;

int main() {
	Complex c1(2, 3);
	Complex c2(c1);

	Complex c3;
	c3 = c1;

	cout << c1 << " " << c3 << endl;

	// Test + operator
	cout << c1 + c2 + c3 << endl;
	Complex c4(4, 2);
	Complex c5 = c4 + 7;
	cout << c5 << endl;

	// Test == and != operator
	Complex c6(2, 3);
	if (c1 == c6) {
		cout << "Equals.\n";
	} else {
		cout << "Not equals.\n";
	}

	if (c1 != c6) {
		cout << "Not equals.\n";
	} else {
		cout << "Equals.\n";
	}

	// Test * operator
	Complex c7(2, 4);
	cout << *c7 + *Complex(4, 3) << endl;

	return 0;
}

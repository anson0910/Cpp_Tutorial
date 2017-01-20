//============================================================================
// Name        : C1S5L52_Namespaces.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "Cat.h"
#include "Animal.h"

using namespace std;
using namespace ay;


int main() {
	Cat cat1;
	cat1.speak();

	ay::Cat cat2;
	cat2.speak();

	cats::Cat cat3;
	cat3.speak();

	cout << CATNAME << endl;
	cout << ay::CATNAME << endl;
	cout << cats::CATNAME << endl;
	return 0;
}

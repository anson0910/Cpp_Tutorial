//============================================================================
// Name        : test.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


int main() {
	char a[] = "hello";
	const char * const b = a;
	//b[0] = 'b';
	for (int i = 0; a[i] != 0; i++)
		cout << b[i] << endl;
	return 0;
}

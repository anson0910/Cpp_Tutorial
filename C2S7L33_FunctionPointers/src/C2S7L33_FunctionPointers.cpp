//============================================================================
// Name        : C2S7L33_FunctionPointers.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void test1() {
	cout << "Hello\n";
}

void test2(int num) {
	cout << "Hello: " << num << endl;
}

int main() {
	void (*p1)() = test1;
	p1();

	void (*p2)(int) = test2;
	p2(5);

	return 0;
}

//============================================================================
// Name        : C2S3L9_StructsAndPadding.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// The pragma pack directive changes alignment scheme to specified number of bytes.
#pragma pack(push, 1)

struct Person {
	char name[50];
	int age;
	double weight;
};

#pragma pack(pop)


int main() {

	// prints 62 instead of 64 without specifying pack
	cout << sizeof(Person) << endl;
	return 0;
}

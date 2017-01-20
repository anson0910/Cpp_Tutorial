//============================================================================
// Name        : C1S5L50_ArrayAndFunctions.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void show1(const int numElements, string texts[]) {
	for (int i = 0; i < numElements; i++)
		cout << texts[i] << endl;
}

void show2(const int numElements, string *texts){
	for (int i = 0; i < numElements; i++)
		cout << texts[i] << endl;
}

void show3(string (&texts)[3]){
	for (int i = 0; i < sizeof(texts) / sizeof(string); i++)
		cout << texts[i] << endl;
}


char *getArray() {
	/*
	 * never return pointers to local variables
	 * Ex. char ptr[100];
	 */
	char *ptr = new char[100];
	return ptr;
}

void freeArray(char *ptr) {
	delete [] ptr;
}


int main() {
	string texts[] = {"one", "two", "three"};
	show1(3, texts);
	show2(3, texts);
	show3(texts);

	char *ptr = getArray();
	freeArray(ptr);

	return 0;
}

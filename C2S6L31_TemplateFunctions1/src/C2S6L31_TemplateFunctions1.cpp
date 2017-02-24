//============================================================================
// Name        : C2S6L31_TemplateFunctions1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

template<class T>	// template<typename T>  would work as well
void print(T t) {
	cout << "Template version: " << t << endl;
}

void print(int num) {
	cout << "Non-template version: " << num << endl;
}

template<class T>
void show() {
	cout << T() << endl;
}

int main() {
	// Below 4 will call template version
	print<string>("Hello!");
	print<int>(5);
	print("Hi there!");
	print<>(6);

	// this will call non-template version
	print(5);

	show<double>();		// requires type specified

	return 0;
}

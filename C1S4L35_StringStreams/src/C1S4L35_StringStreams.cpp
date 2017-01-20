//============================================================================
// Name        : C1S4L35_StringStreams.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <sstream>

using namespace std;


int main() {
	string name = "Bob";
	int age = 32;
	stringstream ss;

	ss << "Name is: ";
	ss << name;
	ss << "; Age is: ";
	ss << age;

	string info = ss.str();
	cout << info;

	return 0;
}

//============================================================================
// Name        : C2S2L2_ExcepetionsBasics.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void mightGoWrong() {
	bool error1 = false, error2 = true;

	if (error1)
		throw "Something went wrong!";

	if (error2)
		throw string("Something else went wrong!");
}

void usesMightGoWrong() {
	mightGoWrong();
}



int main() {
	try {
		usesMightGoWrong();
	} catch (int e) {
		cout << "Error code: " << e << endl;
	} catch (const char *e) {
		cout << "Error message: " << e << endl;
	} catch (string &e) {
		cout << "String error message: " << e << endl;
	}
	return 0;
}

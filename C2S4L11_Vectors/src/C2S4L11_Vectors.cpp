//============================================================================
// Name        : C2S4L11_Vectors.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<string> strs(3);
	strs.push_back("one");
	strs.push_back("two");
	strs.push_back("three");
	cout << strs.size() << endl;	// outputs 6

	for (int i = 0; i < strs.size(); i++)
		cout << strs[i] << endl;

	for (vector<string>::iterator it = strs.begin(); it != strs.end(); it++) {
		cout << *it;
		cout << endl;
	}

	vector<string>::iterator it = strs.begin();
	it += 3;
	cout << *it;	// outputs "one"
	return 0;
}

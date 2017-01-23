//============================================================================
// Name        : C2S4L18_Multimaps.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <map>
using namespace std;

int main() {
	multimap<int, string> dict;
	dict.insert(make_pair(30, "Mike"));
	dict.insert(make_pair(30, "Raj"));
	dict.insert(make_pair(10, "Vicky"));
	dict.insert(make_pair(20, "Bob"));

	for (multimap<int, string>::const_iterator it = dict.begin();
			it != dict.end(); it++)
		cout << it->first << ": " << it->second << endl;

	cout << "\nEntries with key = 30:\n";
	pair<multimap<int, string>::const_iterator,
			multimap<int, string>::const_iterator> its = dict.equal_range(30);
	for (multimap<int, string>::const_iterator it = its.first; it != its.second; it++)
		cout << it->first << ": " << it->second << endl;

	cout << "\nEntries with key = 30: (C++ 11)\n";
	auto its2 = dict.equal_range(30);
	for (multimap<int, string>::const_iterator it = its2.first; it != its2.second; it++)
		cout << it->first << ": " << it->second << endl;

	return 0;
}

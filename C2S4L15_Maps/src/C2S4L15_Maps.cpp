//============================================================================
// Name        : C2S4L15_Maps.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <map>
using namespace std;

int main() {
	map<string, int> ages;
	ages["Mike"] = 40;
	ages["Raj"] = 20;
	ages["Vicky"] = 30;

	// Overwrite Mike's entry in map
	ages["Mike"] = 70;
	cout << ages["Mike"] << endl;

	// Different ways of inserting pairs to map
	pair<string, int> peter("Peter", 100);
	ages.insert(peter);

	ages.insert(pair<string, int>("David", 50));

	ages.insert(make_pair("Alex", 25));


	// Different ways of iterating map
	cout << "\nPrint using iterator:\n";
	for (map<string, int>::const_iterator it = ages.begin(); it != ages.end(); it++)
		cout << it->first << ": " << it->second << endl;

	cout << "\nPrint using pair:\n";
	for (map<string, int>::const_iterator it = ages.begin(); it != ages.end(); it++) {
		pair<string, int> entry = *it;
		cout << entry.first << ": " << entry.second << endl;
	}


	// Find entry by key in map
	if (ages.find("Vicky") != ages.end())
		cout << "Found Vicky!\n";
	else
		cout << "Vicky not found.\n";


	return 0;
}

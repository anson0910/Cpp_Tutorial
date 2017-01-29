//============================================================================
// Name        : C2S4L22_ComplexDataTypes.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
	map<string, vector<int> > scores;
	scores["Mike"].push_back(10);
	scores["Mike"].push_back(20);
	scores["Vicky"].push_back(15);

	for (map<string, vector<int> >::const_iterator it = scores.begin();
			it != scores.end(); it++) {
		string name = it->first;
		vector<int> scoreList = it->second;
		cout << name << ": \n";
		for (int i = 0; i < scoreList.size(); i++)
			cout << scoreList[i] << " ";
		cout << endl;
	}
	return 0;
}

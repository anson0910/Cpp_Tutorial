//============================================================================
// Name        : C2S7L34_FunctionPointersExample.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool match(const string &test) {
	return test.length() == 3;
}

int countStrings(const vector<string> &texts, bool (*match)(const string &test)) {
	int count = 0;
	for (int i = 0; i < texts.size(); i++)
		if (match(texts[i]))
			count++;
	return count;
}

int main() {
	vector<string> texts;
	texts.push_back("one");
	texts.push_back("two");
	texts.push_back("three");
	texts.push_back("two");
	texts.push_back("four");
	texts.push_back("two");
	texts.push_back("three");

	cout << match("one") << endl;

	cout << count_if(texts.begin(), texts.end(), match) << endl;
	cout << countStrings(texts, match) << endl;

	return 0;
}

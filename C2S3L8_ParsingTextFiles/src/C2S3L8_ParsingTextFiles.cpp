//============================================================================
// Name        : C2S3L8_ParsingTextFiles.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

int main() {
	string filename = "test.txt";
	ifstream inFile;
	inFile.open(filename);

	if (!inFile.is_open())
		return 1;

	while (inFile) {
		string text;
		int population;

		getline(inFile, text, ':');
		inFile >> population;
		inFile.get();

		if (!inFile) break;

		cout << "'" << text << "' -- '" << population << "'" << endl;
	}

	return 0;
}

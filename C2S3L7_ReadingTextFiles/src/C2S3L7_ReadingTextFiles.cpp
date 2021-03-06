//============================================================================
// Name        : C2S3L7_ReadingTextFiles.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>

using namespace std;

int main() {
	string inFileName = "test.txt";
	ifstream inFile;
	inFile.open(inFileName);

	if (inFile.is_open()) {
		string line;
		while (inFile) {   // or while (!inFile.eof()) {
			getline(inFile, line);
			cout << line << endl;
		}
	} else {
		cout << "Could not create file: " << inFileName << endl;
	}
	return 0;
}

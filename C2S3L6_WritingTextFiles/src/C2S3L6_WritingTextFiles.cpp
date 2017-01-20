//============================================================================
// Name        : C2S3L6_WritingTextFiles.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>

using namespace std;

int main() {
	string outFileName = "text.txt";

	//ofstream outFile;
	fstream outFile;
	//outFile.open(outFileName);
	outFile.open(outFileName, ios::out);

	if (outFile.is_open()) {
		outFile << "Hello there.\n";
		outFile << 12345 << endl;
		outFile.close();
	} else {
		cout << "Could not create file: " << outFileName << endl;
	}

	return 0;
}

//============================================================================
// Name        : C2S3L10.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>

using namespace std;

#pragma pack(push, 1)

struct Person {
	char name[50];
	int age;
	double weight;
};

#pragma pack(pop)

bool writeOutput(string fileName) {
	Person someone = {"Frodo", 220, 0.8};
	ofstream outputFile;
	outputFile.open(fileName, ios::binary);

	if (!outputFile.is_open()) {
		cout << "Could not create file " + fileName << endl;
		return false;
	}
	outputFile.write((char *) &someone, sizeof(Person));
	outputFile.close();
	return true;
}

bool readInput(string fileName) {
	Person someoneElse = {};
	ifstream inputFile;
	inputFile.open(fileName, ios::binary);
	if (!inputFile.is_open()) {
		cout << "Could not read file" + fileName << endl;
		return false;
	}
	inputFile.read((char *) &someoneElse, sizeof(Person));
	inputFile.close();

	cout << someoneElse.name << ", " << someoneElse.age << ", " << someoneElse.weight << endl;
	return true;
}


int main() {
	string fileName = "test.bin";
	if (!writeOutput(fileName))
		return 1;
	if (!readInput(fileName))
		return 2;
	return 0;
}

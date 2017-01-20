//============================================================================
// Name        : C1S5L57_StaticKeyword.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// .h header file
class Test {
public:
	// Initialization of const must be done here!
	static const int MAX = 99;

private:
	int id;
	static int count;

public:
	Test() {
		id = ++count;
	}

	int getId() {
		return id;
	}

	static void showInfo() {
		cout << count << endl;
	}
};

// .cpp source
int Test::count = 0;


int main() {

	cout << Test::MAX << endl;

	Test t1;
	cout << "Object 1 ID: " << t1.getId() << endl;

	Test t2;
	cout << "Object 2 ID: " << t2.getId() << endl;

	Test::showInfo();

	return 0;
}

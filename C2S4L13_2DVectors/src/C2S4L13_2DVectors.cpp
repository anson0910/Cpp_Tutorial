//============================================================================
// Name        : C2S4L13_2DVectors.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int main() {

	// Create 2D grid with 3 rows and 4 columns initialized with 7s
	vector< vector<int> > grid(3, vector<int>(4, 7));
	grid[1].push_back(8);	// 2nd row will have one more element than others

	for (int row = 0; row < grid.size(); row++) {
		for (int col = 0; col < grid[row].size(); col++)
			cout << grid[row][col];
		cout << endl;
	}
	return 0;
}

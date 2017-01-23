//============================================================================
// Name        : C2S4L14.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <list>
using namespace std;

/*
 * Returns a list with elements 0, 1, 2, 3
 */
list<int> initList() {
	list<int> nums;
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(3);
	nums.push_front(0);
	return nums;
}

void printList(list<int> &nums) {
	for (list<int>::iterator it = nums.begin(); it != nums.end(); it++)
		cout << *it << endl;
}


int main() {
	list<int> nums = initList();

	list<int>::iterator it = nums.begin();
	it++;
	nums.insert(it, 100);  // list becomes 0, 100, 1, 2, 3
	cout << "Element: " << *it << endl; // outputs 1
	printList(nums);

	list<int>::const_iterator eraseIt = nums.begin();
	eraseIt++;	// points to 100
	eraseIt = nums.erase(eraseIt);
	cout << "Element: " << *eraseIt << endl; // outputs 1
	printList(nums);


	// Modify list such that 1234s are inserted before 2s, and 1s are removed
	for (list<int>::iterator it = nums.begin(); it != nums.end();) {
		if (*it == 2)
			nums.insert(it, 1234);

		if (*it == 1)
			it = nums.erase(it);
		else
			it++;
	}
	cout << "List after modification:\n";
	printList(nums);
	return 0;
}

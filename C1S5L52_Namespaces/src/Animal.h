/*
 * Animal.h
 *
 *  Created on: Jan 11, 2017
 *      Author: Anson
 */

#ifndef ANIMAL_H_
#define ANIMAL_H_

#include <iostream>
using namespace std;


namespace ay {

const string CATNAME = "Anson";

class Cat {
public:
	Cat();
	virtual ~Cat();
	void speak();
};

} /* namespace ay */

#endif /* ANIMAL_H_ */

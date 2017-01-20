/*
 * Cat.h
 *
 *  Created on: Jan 11, 2017
 *      Author: Anson
 */

#ifndef CAT_H_
#define CAT_H_

#include <iostream>
using namespace std;


namespace cats {

const string CATNAME = "Alex";

class Cat {
public:
	Cat();
	virtual ~Cat();
	void speak();
};

} /* namespace cats */

#endif /* CAT_H_ */

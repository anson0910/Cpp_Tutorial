/*
 * Complex.h
 *
 *  Created on: Jan 28, 2017
 *      Author: Anson
 */

#ifndef COMPLEX_H_
#define COMPLEX_H_

#include <iostream>

using namespace std;

namespace ansonyu {

class Complex {
private:
	int real;
	int imaginary;
public:
	Complex();
	Complex(int real, int imaginary);
	Complex(const Complex &other);
	int getReal() const { return real; }
	int getImaginary() const { return imaginary; }
	const Complex &operator=(const Complex &other);
	bool operator==(const Complex &other) const;
	bool operator!=(const Complex &other) const;
	Complex operator*() const;
};

ostream &operator<<(ostream &out, const Complex &complex);
Complex operator+(const Complex &c1, const Complex &c2);
Complex operator+(const Complex &c1, int num);
Complex operator+(int num, const Complex &c2);

} /* namespace ansonyu */

#endif /* COMPLEX_H_ */

/*
 * Complex.cpp
 *
 *  Created on: Jan 28, 2017
 *      Author: Anson
 */

#include "Complex.h"

namespace ansonyu {

ostream &operator<<(ostream &out, const Complex &complex) {
	out << "(" << complex.getReal() << ", " << complex.getImaginary() << ")";
	return out;
}

Complex operator+(const Complex &c1, const Complex &c2) {
	return Complex(c1.getReal() + c2.getReal(),
			c1.getImaginary() + c2.getImaginary());
}

Complex operator+(const Complex &c, int num) {
	return Complex(c.getReal() + num, c.getImaginary());
}

Complex operator+(int num, const Complex &c) {
	return Complex(c.getReal() + num, c.getImaginary());
}

Complex::Complex() :
		real(0), imaginary(0) {
}

Complex::Complex(int real, int imaginary) :
		real(real), imaginary(imaginary) {
}

Complex::Complex(const Complex &other) :
		real(other.real), imaginary(other.imaginary) {
	cout << "Copy called.\n";
}

const Complex &Complex::operator=(const Complex &other) {
	cout << "Assignment operator called.\n";
	real = other.real;
	imaginary = other.imaginary;
	return *this;
}

bool Complex::operator==(const Complex &other) const {
	return real == other.real && imaginary == other.imaginary;
}

bool Complex::operator!=(const Complex &other) const {
	return !(*this == other);
}

Complex Complex::operator*() const {
	return Complex(real, -imaginary);
}


} /* namespace ansonyu */

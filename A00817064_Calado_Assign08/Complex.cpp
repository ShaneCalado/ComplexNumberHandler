// Assignment 8: Complex.cpp
// Member-Function definitions for Complex class.
//
// Stores the real and imaginary parts of a complex number.
// Can preform simple mathematical equations on the complex number.
//
// Author: Shane Calado
// Date: 03/17/18

#include <iostream>
#include <iomanip>
#include "Complex.h"

using namespace std;

// Overloaded ctor
// Takes two doubles to assign to the real 
// and imaginary parts of the complex number
Complex::Complex(double real, double imagi)
{
	setRealPart(real);
	setImaginaryPart(imagi);
}

// Default dtor.
Complex::~Complex()
{
}

// Implementation of the setRealPart function.
// Sets the real part of the complex number.
void Complex::setRealPart(double real)
{
	this->realPart = real;
}

// Implementation of the getRealPart function.
// Returns the real part of the complex number.
const double & Complex::getRealPart()
{
	return this->realPart;
}

// Implementation of the setImaginaryPart function.
// Sets the imaginary part of the complex number.
void Complex::setImaginaryPart(double imagi)
{
	this->imaginaryPart = imagi;
}

// Implementation of the getImaginaryPart function.
// Returns the imaginary part of the complex number.
const double & Complex::getImaginaryPart()
{
	return this->imaginaryPart;
}

// Implementation of the plusEq function.
// Adds a complex number and returns a reference to itself.
Complex & Complex::plusEq(Complex & const number)
{
	setRealPart(getRealPart() + number.getRealPart());
	setImaginaryPart(getImaginaryPart() + number.getImaginaryPart());
	return *this;
}

// Implementation of the minusEq function.
// Subtracts a complex number and returns a reference to itself.
Complex & Complex::minusEq(Complex & const number)
{
	setRealPart(getRealPart() - number.getRealPart());
	setImaginaryPart(getImaginaryPart() - number.getImaginaryPart());
	return *this;
}

// Implementation of the display function.
// Prints the complex number to the console.
void Complex::display()
{
	cout << fixed << setprecision(4) << "( " << this->getRealPart() << " , " << this->getImaginaryPart() << " )" << ends;
}

// Assignment 8: Complex.h
// Declaration of Complex class.
//
// Stores the real and imaginary parts of a complex number.
// Can preform simple mathematical equations on the complex number.
//
// Author: Shane Calado
// Date: 03/17/18

#pragma once

class Complex
{
public:
	Complex(double real = 1.0, double imagi = 0.0); // Overloaded ctor
										// Takes two doubles to assign to
										// the real and imaginary parts
										// of the complex number
	~Complex(); // Default dtor.

	void setRealPart(double real); // Sets the real part of the complex number.
	const double& getRealPart(); // Returns the real part of the complex number.

	void setImaginaryPart(double imagi); // Sets the imaginary part of the complex number.
	const double& getImaginaryPart(); // Returns the imaginary part of the complex number.

	Complex& plusEq(Complex& const number); // Adds a complex number and returns a reference to itself.
	Complex& minusEq(Complex& const number); // Subtracts a complex number and returns a reference to itself.

	void display(); // Prints the complex number to the console.


private:
	double realPart; // Real part of complex number.
	double imaginaryPart; // Imaginary part of complex number.
};


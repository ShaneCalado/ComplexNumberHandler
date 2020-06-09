// Assign 8 Main Program - used to "test drive" the Complex class
// File Name: MainProg.cpp
// Author: Bob Langelaan
// Date: Nov. 16th, 2013

#include <iostream>
using namespace std;

#include "Complex.h" // include definition of class Complex from Complex.h

int main()
{
	// Test constructor

	Complex A; // create a Complex object using default arguments
	cout << "The default object is: ";
	A.display();

	Complex B(-2.45, 1.0); // create a Complex object supplying values to the ctor
	cout << "\n\nThe non-default object is: ";
	B.display();

	Complex C(25.777,-35.668); // create another Complex object supplying values to the ctor
	cout << "\n\nThe second non-default object is: ";
	C.display();

	C = 1;  // Test ctor as conversion ctor
	cout << "\n\nAfter testing conversion ctor, C is: ";
	C.display();

	// Test plusEq()
	cout << "\n\n- Test plusEq()";
	A = Complex(-25.44,-3.543);  //Assign new values to Complex objects
	B = Complex(30.3,-34.876);

	// Output "before" values
	cout << "\nA = ";
	A.display();
	cout << "\nB = ";
	B.display();

	// NOTE: Equivalent to:  C = A += B;
	C = A.plusEq(B);

	// Output "after" values
	cout << "\n\nA = ";
	A.display();
	cout << "\nB = ";
	B.display();
	cout << "\nC = ";
	C.display();

	// Test minusEq()
	cout << "\n\n- Test minusEq()";
	A = Complex(4.65,3.789);  //Assign new values to Complex objects
	B = Complex(6.78,9.222);

	// Output "before" values
	cout << "\nA = ";
	A.display();
	cout << "\nB = ";
	B.display();

	// NOTE: Equivalent to:  C = A -= B;
	C = A.minusEq(B);

	// Output "after" values
	cout << "\n\nA = ";
	A.display();
	cout << "\nB = ";
	B.display();
	cout << "\nC = ";
	C.display();

	cout << '\n' << endl;

	system("pause");

	return 0;

} // end main


// 6/23/26 -- EZF
// main.cpp for exercise 2.5.1
// Creating Point objects on the heap

#include "point.hpp"
#include "circle.hpp"
#include "line.hpp"
#include <iostream>

int main(){
	// note that throughout this program, we must call member functions and member variables using -> instead of .
	// This is because we have dynamically allocated these Point objects
	
	Point* p1 = new Point;				// allocate on the heap with default ctor 
	p1->X(5.0);
	p1->Y(5.0);
	Point* p2 = new Point(1.0, 2.0);	// allocate on the heap with parameter ctor
	Point* p3 = new Point(*p2);			// allocate on the heap using copy ctor 

	// calling the Distance() function on Points on the heap
	// to do this, the paramter must be dereferenced
	std::cout << "Distance from p1 to p2 is: " << p1->Distance(*p2) << std::endl;
	std::cout << "Distance from p3 to p2 is: " << p3->Distance(*p2) << std::endl; // expect 0, becasue p3 is a copy of p2

	delete p1; // MUST delete if new -ed!
	delete p2;
	delete p3;

	// Now, we define an array of Point objects 
	
	// ask user for size
	int size;
	std::cout << "Please enter an array size: ";
	std::cin >> size;

	// Trying to init a static array of Points by a value set at runtime is UB -> bad!
	// Point my_array[size]; // this line of code is unsafe for some compilers, but actually safe for g++. 
						  // But still, undefined behavior is bad
	// We can instead allocate an array of Points with variable size using new/delete
	Point* my_array = new Point[size];
	// To answer the question posed in the assignment, in this array, we ONLY use the default constructor for these Points
	// You cannot pass arguments to specific elements, i.e. this is not allowed:  new Point(1,2)[size];
	// You can either manually assign or loop through 
	delete[] my_array;
	

	return 0;

}

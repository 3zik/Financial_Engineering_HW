// EFurman 6/6/2026
// main.cpp file for the Point class -- UPDATED FOR Exercise 2.3.3
//
// This file shows how function overloading can be used
// E.g. the function X() can take in a parameter to set the value of X, or it can be used to get the value of X if no paramter is given

#include "point.hpp" // includes this file to run
#include <iostream>

int main(){
	// Construct two points called myPoint1 and myPoint2
	Point myPoint1; // calling the default ctor for myPoint1
	
	// init point 2 variables
	int x2;
	int y2;


	// take in input 
	std::cout << "Please input an x value: ";
	std::cin >> x2;
	std::cout << "Please input a y value: ";
	std::cin >> y2;

	Point myPoint2(x2, y2); // calling the parameterized ctor for myPoint2
	
	// let's just define and set some random x and y cordinates for myPoint1
	double x1 = 5.5;
	double y1 = -2.1;

	// Assign values via X() and Y() fn.  These are setters when there is a paramter
	
	myPoint1.X(x1);
	myPoint1.Y(y1);
	
	// The same functions can be used as getters!
	std::cout << "The x coordinate for myPoint1 is: " << myPoint1.X() << std::endl;
	std::cout << "The y coordinate for myPoint1 is: " << myPoint1.Y() << std::endl;

	// construct one more Point using the copy ctor
	Point myPoint3 = myPoint1;
	
	// The Distance() function is also overloaded, so no paramter gives a default behavior of distance from (0,0)
	// Given a paramter, the function will return the distance between self and the given point 
	std::cout << "Distance to the origin is: " << myPoint1.Distance() << std::endl;
	std::cout << "Distance is: " << myPoint1.Distance(myPoint2) << std::endl; // prints out the distance

	return 0;
}



// EFurman 6/6/2026
// main.cpp file for the Point class -- UPDATED FOR Exercise 2.3.1
// Here we are making the ctor print text when called to see how many times it is outputted
// I also added in a copy ctor to the object and used it in an example

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

	// Assign values via setters
	
	myPoint1.setX(x1);
	myPoint1.setY(y1);

	// construct one more Point using the copy ctor
	Point myPoint3 = myPoint1;

	std::cout << "Distance is: " << myPoint1.Distance(myPoint2) << std::endl; // prints out the distance

	return 0;
}



// EFurman 6/6/2026
// main.cpp file for the Point class
// The Point class is implemented in point.hpp and point.cpp
// I am testing it here by creating the object, taking in user input using std::cin, 
	// setting coordinates, using the getters, and printing the toString

#include "point.hpp" // includes this file to run
#include <iostream>

int main(){
	
	std::cout << "Testing the Point class!\n";
	std::cout << "Please input an x coordinate: ";
	double x;
	std::cin >> x; // use std::cin to take in info
	std::cout << "Please input a y coordinate: ";
	double y;
	std::cin >> y;
	std::cout << "You inputted the values x: " << x << ", and y: " << y << "!\n";
	std::cout << "Creating object Point with your values...\n";
	Point myPoint; // calling the default ctor 
	// Assign Point::m_x and Point::m_y using setters
	myPoint.setX(x);
	myPoint.setY(y);
	// output the ToString() method that returns a std::string 
	std::cout << myPoint.ToString();
	// output the using the getters 
	std::cout << "Using the getters, your Point is: (" << myPoint.getX() << ", " << myPoint.getY() << ").\n";
	

	return 0;
}

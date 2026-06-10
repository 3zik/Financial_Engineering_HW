// EFurman 6/6/26
// point class source file UPDATED for exercise 2.3.2
// This file now implements fn overloading for the functions Distance() and X() and Y()
// For X() and Y(), depending on if there is a provided paramter, they can be getters or setters
// For Distance() if a point is provided in the paramter, it is passed by reference and the distance
// between self and inputted point is returned as a double
// If no paramter is provided, the distance from 0, 0 is returned. (essentially, it is actually 1 function with a default parameter of 0,0)
// Also be sure to update the functionality of member fns that call other members that have been renamed

#include "point.hpp"
#include <sstream> 
#include <iostream> //added here for the output
#include <string> // for the ToString() method
#include <cmath> // for sqrt, abs function

// default constructor with initializer list
// initialize m_x and m_y to both be 0.0
Point::Point() : m_x(0.0), m_y(0.0) {
	std::cout << "Default ctor called!\n";
}

// copy ctor 
Point::Point(const Point& other) : m_x(other.m_x), m_y(other.m_y){
	std::cout << "Copy ctor called!\n";
}

// other ctor 
Point::Point(const double& x, const double& y) : m_x(x), m_y(y){
		std::cout << "Parameterized ctor called!\n";
}

// default destructor 
Point::~Point(){
	std::cout << "Default destructor called!\n";
}

	// getters
double Point::X() const{ // const because a getter does not change the value 
	return m_x; //returns a copy of m_x
}
double Point::Y() const{
	return m_y; //returns a copy of m_y
}

// setters
void Point::X(double x){ // setters are void functions that don't return, only set values
					   // It takes in the parameter that is the same type as m_x
	m_x = x; // sets m_x
}
void Point::Y(double y) { // same for m_y
	m_y = y; // sets m_y
}

// distnace functions - updated for exercise 2.2.2

double Point::Distance() const { // finds distance from the Point to the origin (0.0, 0.0)
	// use the pythagorean theorem / distance formula
	return std::sqrt(m_x*m_x + m_y * m_y);
}
double Point::Distance(const Point& p) const { // Updated input param to be by const ref rather than by value
	// NOTEABLY, it would be illegal to change the values of Point p because we have labelled the parameter const 
	// So something like the following throws a compiler error:
	// p.setX(5);

	// make sure to update the names of the fns below as well:
	double x_distance = std::abs(p.X() - m_x); // calculates the absolute difference between x values 
	double y_distance = std::abs(p.Y() - m_y); // same for y

	return std::sqrt(x_distance * x_distance + y_distance * y_distance); // returns the absolute difference between the points
} 

std::string Point::ToString() const { // returns a description in the form of a string of the Point
	std::stringstream ss;
	ss << "Point (" << m_x << ", " << m_y << ")\n";
	return ss.str();
}



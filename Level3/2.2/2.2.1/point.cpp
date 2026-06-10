// EFurman 6/6/26
// point class source file 
// Includes the code for the destructor, constructor, getters/setters, private member vars, and toString fn for Point class.

#include "point.hpp"
#include <sstream> 
#include <string> // for the ToString() method

// default constructor with initializer list
// initialize m_x and m_y to both be 0.0
Point::Point() : m_x(0.0), m_y(0.0) {}

// default destructor 
Point::~Point(){}

	// getters
double Point::getX() const{ // const because a getter does not change the value 
	return m_x; //returns a copy of m_x
}
double Point::getY() const{
	return m_y; //returns a copy of m_y
}

// setters
void Point::setX(double x){ // setters are void functions that don't return, only set values
					   // It takes in the parameter that is the same type as m_x
	m_x = x; // sets m_x
}
void Point::setY(double y) { // same for m_y
	m_y = y; // sets m_y
}

std::string Point::ToString() const { // returns a description in the form of a string of the Point
	std::stringstream ss;
	ss << "Point (" << m_x << ", " << m_y << ")\n";
	return ss.str();
}



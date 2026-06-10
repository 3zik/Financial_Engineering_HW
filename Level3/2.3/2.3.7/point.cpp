// EFurman 6/9/26
// point class source file UPDATED for exercise 2.3.7
// Adding inline functions
// Here I make the getters and setters of the Point class inline functions
// I do this by removing the getters/setters I used previously in point.cpp
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

// getters/setters are defined inline in the .hpp file

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



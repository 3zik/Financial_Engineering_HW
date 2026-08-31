// EFurman 6/23/26
// point class source file (recycled from HW 3)


#include "point.hpp"
#include "shape.hpp"
#include <sstream> 
#include <iostream> //added here for the output
#include <string> // for the ToString() method
#include <cmath> // for sqrt, abs function
#include <ostream> // for ostream operator 

namespace Ethan::CAD {


// default constructor with initializer list
// initialize m_x and m_y to both be 0.0
Point::Point() : Shape(), m_x(0.0), m_y(0.0) {
	std::cout << "Default ctor called!\n";
}

// copy ctor 
Point::Point(const Point& other) : Shape(other), m_x(other.m_x), m_y(other.m_y){
	std::cout << "Copy ctor called!\n";
}

// other ctor 
Point::Point(const double& x, const double& y) : Shape(), m_x(x), m_y(y){
	std::cout << "Parameterized ctor called!\n";
}


// default destructor 
Point::~Point(){
	std::cout << "Default destructor called!\n";
}

// OPERATORS DEFINED HERE 

// added the ostream operator 
std::ostream& operator<<(std::ostream& os, const Point& p){
	os << "(" << p.m_x << ", " << p.m_y << ")"; // friend allows ostream to access private members
	return os;
}


Point Point::operator- () const{ // negate the coordinates
	return Point(-m_x, -m_y); // creates a new Point with -m_x and -m_y
}

Point Point::operator* (double factor) const { // scale the coordinates 
	return Point(factor * m_x, factor * m_y); //return a new Point with factor * m_x and factor * m_y 
}

Point Point::operator+ (const Point& p) const { // add the coordinates 
	return Point(m_x + p.X(), m_y + p.Y()); // retrusn a new Point with the summed x and y values. uses getters for Point p 
}

bool Point::operator== (const Point& p) const{ // check if two points are equivalent
	return (m_x == p.X() && m_y == p.Y()); // uses conditional and operators and getters from p 
}

Point& Point::operator= (const Point& source){ // Assignment operator
	Shape::operator=(source);
	m_x = source.X();
	m_y = source.Y();
	std::cout << "Assignment Operator called!" << "\n";
	return *this;
}

Point& Point::operator*= (double factor){ // scale coordinates and then assign 
	m_x = factor * m_x;
	m_y = factor * m_y;
	return *this;
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
	double x_distance = std::abs(p.m_x - m_x); // calculates the absolute difference between x values 
	double y_distance = std::abs(p.m_y - m_y); // same for y

	return std::sqrt(x_distance * x_distance + y_distance * y_distance); // returns the absolute difference between the points
} 

std::string Point::ToString() const { // returns a description in the form of a string of the Point
	std::string s = Shape::ToString(); // calls the base class functionality

	std::stringstream ss;
	ss << "Point (" << m_x << ", " << m_y << "), " << s << "\n";
	return ss.str();
}

void Point::Draw() const {
	std::cout << "Drawing a Point at (" << m_x << ", " << m_y << ")\n";
}

}

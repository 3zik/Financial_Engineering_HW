// Ethan Furman 06/23/26
// circle.cpp
// Exercise 2.4.2 - Added ostream operator to circle class 
//

#define _USE_MATH_DEFINES // macro for PI
#include <cmath>
#include <sstream>
#include <string> 
#include "point.hpp"
#include "circle.hpp" // need to have this
#include <ostream> // need to have this

//default ctor
Circle::Circle() : m_radius(0.), m_center(0.,0.) {}

// copy ctor
Circle::Circle(const Circle& other) : m_radius(other.Radius()), m_center(other.Center()) {}

// parameterized ctor 
Circle::Circle(double other_rad, Point other_center) : m_radius(other_rad), m_center(other_center) {}

// default dtor 
Circle::~Circle() {}

// assignment operator 
Circle& Circle::operator= (const Circle& source){
	m_center = source.Center();
	m_radius = source.Radius();
	return *this;
}

// added the ostream operator 
std::ostream& operator<<(std::ostream& os, const Circle& c){
	os << "(" << c.Radius() << ", " << c.Center() << ")"; // bad to use getters, but ostream is a global function
	return os;
}

// getters
double Circle::Radius() const {
	return m_radius;
}
Point Circle::Center() const {
	return m_center;
}
double Circle::Area() const {
	double pi = M_PI;
	return (pi * m_radius * m_radius);
}
double Circle::Diameter() const {
	return (2 * m_radius);
}
double Circle::Circumference() const {
	double pi = M_PI;
	return (2 * m_radius * pi);
}
	// setters 
void Circle::Radius(double other_rad) {
	m_radius = other_rad;
}
void Circle::Center(Point other_center) {
	m_center = other_center;
}
std::string Circle::ToString() const {
	std::stringstream ss;
	ss << "Circle, with radius: " << m_radius << ", and center point: " << m_center.ToString() << "\n";
	return ss.str();
}


// Ethan Furman 06/09/26
// circle.cpp
// Exercise 2.3.6
// Imeplements a Circle object with member vars center point and radius 
// Has relevant ctors, dtor, getters, setters, and a ToString() method
#define _USE_MATH_DEFINES // macro for PI
#include <cmath>
#include <sstream>
#include <string> 
#include "point.hpp"
#include "circle.hpp" // need to have this

//default ctor
Circle::Circle() : m_radius(0.), m_center(0.,0.) {}

// copy ctor
Circle::Circle(const Circle& other) : m_radius(other.Radius()), m_center(other.Center()) {}

// parameterized ctor 
Circle::Circle(double other_rad, Point other_center) : m_radius(other_rad), m_center(other_center) {}

// default dtor 
Circle::~Circle() {}

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


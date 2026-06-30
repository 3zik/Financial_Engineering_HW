// Ethan Furman 06/23/26
// circle.hpp
// Exercise 2.4.2 - Added ostream operator to circle class 

#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include <string> // for the ToString() method
#include "point.hpp"

class Circle{
private:
	double m_radius;
	Point m_center;

public:
	//default ctor
	Circle();

	// copy ctor
	Circle(const Circle& other);

	// parameterized ctor 
	Circle(double other_rad, Point other_center);
	// default dtor 
	~Circle();

	// assignment operator 
	Circle& operator= (const Circle& source);

	// getters
	double Radius() const;
	Point Center() const;
	double Area() const;
	double Diameter() const;
	double Circumference() const;
	// setters 
	void Radius(double other_rad);
	void Center(Point other_center);

	std::string ToString() const;
};

std::ostream& operator<<(std::ostream& os, const Circle& c);

#endif

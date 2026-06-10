// EFurman 6/6/26
// point class header file  - UPDATED FOR EXERCISE 2.3.3
// This file now implements fn overloading for the functions Distance() and X() and Y()
// For X() and Y(), depending on if there is a provided paramter, they can be getters or setters
// For Distance() if a point is provided in the paramter, it is passed by reference and the distance
// between self and inputted point is returned as a double
// If no paramter is provided, the distance from 0, 0 is returned. (essentially, it is actually 1 function with a default parameter of 0,0)
//

#ifndef POINT_HPP
#define POINT_HPP

#include <string>

class Point {
private:
	// private member variables m_x and m_y for the point's position
	double m_x;
	double m_y;
public:
	// default constructor 
	Point();

	// copy constructor (THIS IS NEW FOR THIS EXERCISE!)
	Point(const Point& other);

	// other ctor (can take in values that aren't default)
	Point(const double& x, const double& y);

	// default constructor 
	~Point();

	// getters
	// rename to a generic name for fn overloading
	double X() const;
	double Y() const;

	// rename to a generic name for fn overloading 
	void X(double x); 
	void Y(double y);

	// rename to a generic name for fn overloading
	double Distance() const; // calcuates the distance from the origin (0.0,0.0)
	double Distance(const Point& p) const; // CHANGED THIS to pass by const reference!!
	
	std::string ToString() const; // again, const because we aren't changing anything, and we return std::string here
};


#endif

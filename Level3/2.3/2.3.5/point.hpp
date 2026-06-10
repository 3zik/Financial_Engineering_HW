// EFurman 6/6/26
// point class header file  - UPDATED FOR EXERCISE 2.3.4
// I already had my getters, Distance() fn, and ToSTring() fn  as const, but that is essential for this exercise

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

	// copy constructor
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

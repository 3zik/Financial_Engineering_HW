// EFurman 6/9/26
// point class header file  - UPDATED FOR EXERCISE 2.3.7
// I am adding inline fns to the Point class for the getters and settres

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
	// Because they are inline, these fns must be defined here, in the .hpp file
	void X(double x) { m_x = x; } 
	void Y(double y) { m_y = y; }

	// rename to a generic name for fn overloading
	double Distance() const; // calcuates the distance from the origin (0.0,0.0)
	double Distance(const Point& p) const; // CHANGED THIS to pass by const reference!!
	
	std::string ToString() const; // again, const because we aren't changing anything, and we return std::string here
};

// normal inline definitions
inline double Point::X() const
{
    return m_x;
}

inline double Point::Y() const
{
    return m_y;
}


#endif

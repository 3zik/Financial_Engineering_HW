// EFurman 6/6/26
// point class header file  - UPDATED FOR EXERCISE 2.3.2
// I updated the Distance() function to take in parameters by cosnt reference rather than by value

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
	double getX() const; // const because the getters don't change the value 
	double getY() const;

	// setters
	void setX(double x); // setters are void functions that don't return, only set values

	void setY(double y);

	double DistanceOrigin() const; // calcuates the distance from the origin (0.0,0.0)
	double Distance(const Point& p) const; // CHANGED THIS to pass by const reference!!
	
	std::string ToString() const; // again, const because we aren't changing anything, and we return std::string here
};


#endif

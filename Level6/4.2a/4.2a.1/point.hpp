// EFurman 6/23/26
// point class

#ifndef POINT_HPP
#define POINT_HPP

#include <ostream> // needed for the ostream operator 
#include <string>
#include "shape.hpp"

namespace Ethan::CAD {

	class Point : public Shape {
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
		
		// OPERATORS 
		
		friend std::ostream& operator<<(std::ostream& os, const Point& p); // add ostream to header
																		// listed as a friend to acces private members

		Point operator- () const; // negate the coordinates 
		Point operator* (double factor) const; // scale the coordinates 
		Point operator+ (const Point& p) const; // add coordinates
		bool operator== (const Point& p) const; // check if equal
		Point& operator= (const Point& source); // assignment operator 
		Point& operator*= (double factor); // scale coordinates and assign
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
		
		// UPDATED: added override keyword
		std::string ToString() const override; // again, const because we aren't changing anything, and we return std::string here
	
		// UPDATED: Draw() fn added:
		void Draw() const override;
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


}

#endif

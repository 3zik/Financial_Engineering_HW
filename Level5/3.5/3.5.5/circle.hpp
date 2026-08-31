// Ethan Furman 06/23/26
// circle.hpp

#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include <string> // for the ToString() method
#include "point.hpp"
#include "shape.hpp"

namespace Ethan::CAD {

	class Circle : public Shape {
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

		friend std::ostream& operator<<(std::ostream& os, const Circle& c); // add ostream to header
																		// listed as a friend to acces private members
		// getters
		double Radius() const;
		Point Center() const;
		double Area() const;
		double Diameter() const;
		double Circumference() const;
		// setters 
		void Radius(double other_rad);
		void Center(Point other_center);
	
		// UPDATED: added override keyword
		std::string ToString() const override;

		// UPDATED: Draw() fn added:
		void Draw() const override;
	};

}

#endif

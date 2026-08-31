// Ethan Furman 
// Line.hpp 

#ifndef LINE_HPP
#define LINE_HPP

#include "shape.hpp"
#include <string> // for the ToString() method
#include "point.hpp" // needed to use Point objects 
#include <ostream>

namespace Ethan::CAD {
	

	class Line : public Shape {
	private:
	// by design, we have private data members Point start and Point end 
	// We can say that the Line object itself goes from start point to end point ;
		Point start_;
		Point end_;

	public:
		// default ctor 
		Line();

		// copy ctor
		Line(const Line& other);

		// parameterized ctor
		Line (const Point& other_start, const Point& other_end);

		// default destructor
		~Line();

		Line& operator= (const Line& source); // assignment operator

		friend std::ostream& operator<<(std::ostream& os, const Line& l); // add ostream to header
																		// listed as a friend to acces private members

		// getters (allow for overload)
		const Point& start() const;
		const Point& end() const;
		
		// setters (allow for overload as well)
		void start(const Point& other_start);
		void end(const Point& other_end);

		// ToString() method return a description of the line in the form of a std::string
		// const method
		// UPDATED: added override keyword
		std::string ToString() const override;

		// Length() function return the length of the line, so returns a double
		// Also const
		double Length() const;

	};

}
#endif

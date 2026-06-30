// Ethan Furman 6/23/26
// Line.hpp for Exercise 2.4.4
// Added ostream operator for line class
// added friend keyword

#ifndef LINE_HPP
#define LINE_HPP

#include <string> // for the ToString() method
#include "point.hpp" // needed to use Point objects 
#include <ostream>

class Line {
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
	std::string ToString() const;

	// Length() function return the length of the line, so returns a double
	// Also const
	double Length() const;

};

#endif

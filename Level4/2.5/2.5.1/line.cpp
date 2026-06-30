// Ethan Furman 6/23/26
// Line.cpp for Exercise 2.4.4
// Added ostream operator for line.cpp class 
// Added friend keyword to the operator so it can access private members

#include "line.hpp" 
#include "point.hpp" // required for using Point objects
#include <string>
#include <sstream> // for ToString()
#include <ostream> // for ostream

// default ctor 
// initialize members start and end Points to be (0,0) using initializer list
Line::Line() : start_(0,0), end_(0,0) {} // also the 0s here will be implicitly cast to doubles i think

// copy ctor here
// using initializer list and the other value's points
Line::Line(const Line& other) : start_(other.start_), end_(other.end_) {}

// parameterized ctor here using init list again
Line::Line(const Point& other_start, const Point& other_end) : start_(other_start), end_(other_end) {}

// default dtor here 
Line::~Line() {}

// Assignment operator
Line& Line::operator= (const Line& source){ // Assignment operator
	start_ = source.start();
	end_ = source.end();
	return *this;
}

// added the ostream operator 
std::ostream& operator<<(std::ostream& os, const Line& l){
	os << "(" << l.start_ << ", " << l.end_ << ")"; // friend allows ostream to access private members
	return os;
}

// getters (with overload)
const Point& Line::start() const { // dont forget this is const
	return start_;
}
const Point& Line::end() const { // dont forget this is const
	return end_;
}
// setters (with overload)
void Line::start(const Point& other_start) {
	start_ = other_start;
}

void Line::end(const Point& other_end){
	end_ = other_end;
}

double Line::Length() const{
	return start_.Distance(end_);
}

std::string Line::ToString() const { // returns a description in the form of a string of the Line
									 // re-use the Point.ToString() methods
	std::stringstream ss;
	ss << "Line: " << start_.ToString() << " to " << end_.ToString() << "\n";
	return ss.str();
}

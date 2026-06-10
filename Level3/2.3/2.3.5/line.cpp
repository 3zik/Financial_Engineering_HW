// Ethan Furman 6/9/26
// Line.cpp for Exercise 2.3.5


#include "line.hpp" 
#include "point.hpp" // required for using Point objects
#include <string>
#include <sstream> // for ToString()


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

// getters (with overload)
Point Line::start() const { // dont forget this is const
	return start_;
}
Point Line::end() const { // dont forget this is const
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

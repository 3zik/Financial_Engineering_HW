// EFurman 6/9/2026
// main.cpp file for 2.3.5 for testing Line objects


#include "point.hpp" // includes this file to run
#include "line.hpp" // same for this
#include <iostream>

int main(){

	Line l;
	Point p1(1.0, 1.0);
	Point p2(2.0, 2.0);
	l.start(p1);
	l.end(p2);
	std::cout << l.ToString() << std::endl;
	std::cout << "Line l has a length of: " << l.Length() << std::endl;
	Line l2(l);
	std::cout << "I used the copy ctor to create line l2 with length " << l2.Length() << std::endl;
	return 0;
}



// 8/24/26 -- EZF
// main.cpp for exercise 3.4.2
// Testing the colon syntax
// The main.cpp file compiles without errors, showing me the updates work
// Shape inheritance testing

#include "point.hpp"
#include "line.hpp"
#include "circle.hpp"
#include <iostream>

int main(){
	// SEE note.txt

    // Single class using declaration
    using namespace Ethan::CAD;

    Shape s;						// create Shape
	Point p(10,20);					// create Point
	Line l(Point(1,2), Point(3,4)); // create Line
	
	std::cout << s.ToString() << std::endl;
	std::cout << p.ToString() << std::endl;
	std::cout << l.ToString() << std::endl;


	std::cout << "Shape ID: " << s.ID() << std::endl;
	std::cout << "Point ID: " << p.ID() << std::endl;
	// Does this work? -> YES. ID() is public in Shape, and Point inherits it 
	std::cout << "Line ID: "  << l.ID() << std::endl;
	// Does this work? -> YES. ID() is public in Shape, and Line inherits it 


	Shape* sp;         // Create pointer to a shape variable.
	sp = &p;            // Point in a shape variable. 
	std::cout << sp->ToString() << std::endl; // What is printed?
											  // Shape::ToString()'s output, not Point (10, 20)
											  // e.g. ID: 719885386
											  // This is because ToString() is not virtual
											  // So then, sp->ToString() is resolved at compile time 
											  // based on sp's type, which is Shape*.
											  // So, compiler doesn't check what sp points to at runtime.
 
	// Create and copy Point p to new point.
	Point p2;
	p2 = p;
	std::cout << p2 << ", " << p2.ID() << std::endl; // Is the ID copied if you do not call the base class assignment in point?
													 // No. If Point::operator= doesn't explicitly call this line:
													 // Shape::operator=(source)
													 // then p2's id_ is never touched by assignment.
													 // it would give the wrong value (probably not a compilation error though)


    return 0;
}

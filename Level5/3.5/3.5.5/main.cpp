// 8/24/26 -- EZF
// main.cpp

#include "point.hpp"
#include "line.hpp"
#include "circle.hpp"
#include <iostream>
int main(){
	using namespace Ethan::CAD;


	Point p(10,20);					// create Point
	Line l(Point(1,2), Point(3,4)); // create Line

	std::cout << p.ToString() << std::endl;
	std::cout << l.ToString() << std::endl;
	std::cout << "Point ID: " << p.ID() << std::endl;
	// Does this work? -> YES. ID() is public in Shape, and Point inherits it
	std::cout << "Line ID: "  << l.ID() << std::endl;
	// Does this work? -> YES. ID() is public in Shape, and Line inherits it

	Shape* sp;          
	sp = &p;   
	std::cout << sp->ToString() << std::endl;

	// Create and copy Point p to new point.
	Point p2;
	p2 = p;
	std::cout << p2 << ", " << p2.ID() << std::endl;

	// EXERCISE 5:
	Shape* dshapes[3];
	dshapes[0] = new Line;
	dshapes[1] = new Point;
	dshapes[2] = new Line(Point(1.0, 2.5), Point(3.4, 5.2));
	for (int i = 0; i != 3; i++) delete dshapes[i];
	// Are the proper (derived) destructors called? -> YES, now that
	// ~Shape() is virtual. Before making it virtual, only ~Shape()
	// ran for every element, regardless of actual type.

	//  Shape can no longer be
	// instantiated now that Draw() is pure virtual. 
	// Shape s;

	Shape* shapes[4];
	shapes[0] = new Line;
	shapes[1] = new Point;
	shapes[2] = new Circle;
	shapes[3] = new Line(Point(1.0, 2.5), Point(3.4, 5.2));

	for (int i = 0; i != 4; i++) shapes[i]->Draw();
	// Does the correct Draw() run for each concrete type? -> YES,
	// dispatched at runtime via the vtable, same mechanism as
	// ToString().

	for (int i = 0; i != 4; i++) delete shapes[i];

	p.Print();
	l.Print();
	// Does it print the right info even though Point/Line have no
	// Print() of their own? -> YES. Both inherit Shape::Print()
	// unchanged; inside it, the unqualified ToString() call still
	// dispatches virtually to Point::ToString() / Line::ToString()
	// based on actual runtime type.

	return 0;
}

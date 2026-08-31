// 8/24/26 -- EZF
// main.cpp for exercise 3.5.4
// Testing Draw() polymorphism and Shape as abstract base class
#include "point.hpp"
#include "line.hpp"
#include "circle.hpp"
#include <iostream>
int main(){
	using namespace Ethan::CAD;

	// Shape s;
	// SHAPE CANNOT BE INSTANTIATED BECAUSE	the Draw() fn is pure virtual!
	//

	Shape* shapes[4];
	shapes[0] = new Line;
	shapes[1] = new Point;
	shapes[2] = new Circle;
	shapes[3] = new Line(Point(1.0, 2.5), Point(3.4, 5.2));

	std::cout << "drawing shapes via Shape* \n";
	for (int i = 0; i != 4; i++) shapes[i]->Draw();
	// Does the correct Draw() run for each concrete type? -> YES.

	std::cout << "\ncleaning up \n";
	for (int i = 0; i != 4; i++) delete shapes[i];
	// Destructors still fire correctly here because ~Shape() is
	// virtual

	return 0;
}

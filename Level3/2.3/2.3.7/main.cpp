// Efurman 6/9/2026
// main.cpp for Exercise 2.3.7
// Testing the inline getter/setter functions that I defined in the point.hpp file
//

#include <iostream>
#include "point.hpp"

int main(){
	Point p1;
	std::cout << "Default point:\n";
	std::cout << p1.ToString() << "\n";
	std::cout << "Now assigning X = 3.0, Y = 4.0. Check with output soon!\n";
	// setters used in the same way
	p1.X(3.0);
	p1.Y(4.0);

	// print to check
	std::cout << "X = " << p1.X() << ", and Y = " << p1.Y() << '\n';

	// Distance() fn still work as well
	std::cout << "Distance from origin = " << p1.Distance() << '\n';

	return 0;
}

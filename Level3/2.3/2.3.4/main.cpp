// EFurman 6/6/2026
// main.cpp file for the Point class -- UPDATED FOR Exercise 2.3.4
// I create a const point and try to set the x-coordinate (which is not allowed!)
// We are allowed to read the x-coordinate because getting it is const 


#include "point.hpp" // includes this file to run
#include <iostream>

int main(){

	const Point cp(1.5, 3.9); // construct with parameterized ctor 
	// cp.X(0.3); // NOT ALLOWED!
	
	std::cout << cp.X() << std::endl;
	// this is only allowed when the getter X() is const.  If it is not listed as such, we get a compiler error
	std::cout << cp.Y() << std::endl;
	std::cout << cp.Distance() << std::endl;
	std::cout << cp.ToString() << std::endl;

	return 0;
}



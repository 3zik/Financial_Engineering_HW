// EFurman 6/9/2026
// main.cpp file for 2.3.6 for testing Circle objects


#include "point.hpp" // includes this file to run
#include "circle.hpp" // same for this
#include <iostream>

int main(){
	Circle c1;

	std::cout << "Radius: " << c1.Radius() << '\n';
    std::cout << "Center: " << c1.Center().ToString() << '\n';


	Point center(3.0, 4.0);
	Circle c2(5.0, center); // test parameterized ctor 
	

	std::cout << c2.ToString() << std::endl;
	std::cout << "Radius: " << c2.Radius() << '\n';
    std::cout << "Diameter: " << c2.Diameter() << '\n';
    std::cout << "Circumference: " << c2.Circumference() << '\n';
    std::cout << "Area: " << c2.Area() << '\n';

	Circle c3(c2); // test copy ctor

    std::cout << c3.ToString() << '\n';

    std::cout << "\nTesting setters:\n";

    c1.Radius(10.0);
    c1.Center(Point(1.0, 2.0));

    std::cout << c1.ToString() << '\n';

	return 0;
}



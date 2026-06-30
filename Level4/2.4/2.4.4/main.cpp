// 6/23/26 -- EZF
// main.cpp for exercise 2.4.4
// Since I added ostream operators to the circle, line, and point classes 

#include "point.hpp"
#include "circle.hpp"
#include "line.hpp"
#include <iostream>

int main(){
	Point p1(1.0, 1.0);
	Point p2(2.0, 2.0);
	Line l1(p1, p2);
	Circle c1(5.0, p1);
	
	std::cout << "p1 is: " << p1 << ", p2 is: " << p2 << std::endl;
	std::cout << "l1 is: " << l1 << ", c1 is: " << c1 << std::endl;

	return 0;

}

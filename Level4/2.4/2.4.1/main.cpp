// 6/22/26 -- EZF
// main.cpp for exercise 2.4.1
// Since I added operators to the Point class, this file tests these additions and shows how they are used


#include "point.hpp"
#include "circle.hpp"
#include "line.hpp"
#include <iostream>

int main(){
	std::cout << "Using new Point operators:" << "\n";
	Point a(3,4);
	Point b(1,2);
	std::cout << "Point a and Point b defined at (3,4) and (1,2), respectively." << "\n";
	std::cout << "Using negation operator and addition and assignment: Point c = a+ (-b); gives: ";
	Point c = a + (-b);
	std::cout << c.ToString();
	std::cout << "Using Add coordinates operator and assignment: Point d = a+b; gives: ";	
	Point d = a + b;
	std::cout << d.ToString();
	std::cout << "Check if Point c == Point d using cmp op: " << (d == c) << "\n";
	std::cout << "Check if Point c == Point c using comparison operator : " << (c == c) << "\n";
	std::cout << "Point d is currently: " << d.ToString();
	d *= 5;
	std::cout << "Point d *= 5 is equal to: " << d.ToString();
	std::cout << "also checking assignment operators for circle and line." << "\n";
	Line line1(a, b);
	Line line2 = line1;
	Circle c1(5.0, d);
	Circle c2 = c1;
	std::cout << "line1: " << line1.ToString() << "line2 = line1, so line2 equals: " << line2.ToString() << "\n";
	std::cout << "Circle c1: " << c1.ToString() << "c2 = c1, so c2 equals: " << c2.ToString() << "\n";
	return 0;

}

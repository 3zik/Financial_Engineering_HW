// main.cpp -- Array bounds checking exercise
//
//
// Test tempalted array Array<T>
// Only array.hpp is included, not array.cpp
#include "array.hpp"
#include "point.hpp"
#include <iostream>

using namespace std;
using Ethan::Containers::Array;
using Ethan::Containers::ArrayException;
using Ethan::CAD::Point;


int main(){
	const size_t size = 5;
	
	Array<Point> points(size);
	for (double i = 0.; i < size; ++i) {
		points.SetElement(i, Point(i, (i * 2)));
	}
 
	for (size_t i = 0; i < size; ++i) {
		cout << "points[" << i << "] = " << points[i] << "\n";
	}
 
	try {
		points.SetElement(size, Point(0, 0)); // out of bounds on purpose
	} catch (const ArrayException& e) {
		cout << e.GetMessage();
	}
 
	// prove it works for a completely different T too
	Array<int> ints(3);
	ints[0] = 10;
	ints[1] = 20;
	ints[2] = 30;
	cout << "ints[1] = " << ints[1] << "\n";
 
	return 0;
}

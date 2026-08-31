// Ethan 
//
// main.cpp to test the Point Array (concrete inheritance)
//

#include <iostream>
#include "pointArray.hpp"
using namespace std;
using Ethan::Containers::PointArray;
using Ethan::CAD::Point;

int main() {
	PointArray path(3);
	path[0] = Point(0, 0);
	path[1] = Point(3, 4);		// distance from (0,0): 5
	path[2] = Point(3, 0);		// distance from (3,4): 4

	cout << "Length = " << path.Length() << endl;	// expect 9

	PointArray single(1);
	single[0] = Point(1, 1);
	cout << "Single-point length = " << single.Length() << endl;	// expect 0

	PointArray empty(0);
	cout << "Empty length = " << empty.Length() << endl;	// expect 0

	return 0;
}

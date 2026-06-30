// 6/30/26 -- EZF
// main.cpp for exercise 2.6.1
// Testing the new namespaces 
// The main.cpp file compiles without errors, showing me the updates work

#include "point.hpp"
#include "line.hpp"
#include "circle.hpp"
#include "array.hpp"
#include <iostream>

int main(){
	Ethan::CAD::Point p;


    // Single class using declaration
    using Ethan::CAD::Line;

    Line l;


    // Entire namespace using declaration
    using namespace Ethan::Containers;

    Array arr;


    // Namespace alias
    namespace CAD = Ethan::CAD;

    CAD::Circle c;


    return 0;
}

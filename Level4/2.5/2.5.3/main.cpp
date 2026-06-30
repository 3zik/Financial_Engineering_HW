// 6/30/26 -- EZF
// main.cpp for exercise 2.5.3
// Testing the array object 

#include "point.hpp"
#include "array.hpp"
#include <iostream>

int main(){
	Array a;

	std::cout << "arrays constructed with default ctor get a size of: " <<  a.Size() << "\n"; // testing Size() getter

	Point p(1,2);
	a.SetElement(0, p); // setter 
	
	std::cout << "a[0] set to: " << p.ToString() << "\n";

	Array b = a; // copy ctr
	
	Array c(5);

	c = a;

	c[0] = Point(3,4);


	// confirmed no memory leaks with valgrind ! :)
	return 0;
}

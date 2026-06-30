// 6/23/26 -- EZF
// main.cpp for exercise 2.4.3
// Testing my new ctor that takes in only 1 double 

#include "point.hpp"
#include <iostream>

int main(){
	
	// Given test code below
	// 
	//
	Point p(1.0, 1.0);
	//if (p==1.0) std::cout << "Equal!" << std::endl;
	//else std::cout << "Not equal" << std::endl;

	
	// This code does compile initially, because the compiler implicitly converts 1.0 to a ptr object
	// After adding explicit, the above code does not compile, but the below code is ok
	if (p==(Point)1.0) std::cout<<"Equal!"<<std::endl;
	

	return 0;

}

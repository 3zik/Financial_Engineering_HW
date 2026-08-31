// main.cpp -- Array bounds checking exercise
#include "array.hpp"
#include "point.hpp"
#include <iostream>

int main(){
	using namespace Ethan::Containers;
	using namespace Ethan::CAD;

	Array arr(5); // valid indices are 0..4

	try {
		Point p = arr[10]; // out of bounds -- throws -1
	}
	catch (int errorCode) {
		std::cout << "Error: index out of bounds (code " << errorCode << ")\n";
	}

	return 0;
}

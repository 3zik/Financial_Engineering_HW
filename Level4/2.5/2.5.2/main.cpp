// 6/23/26 -- EZF
// main.cpp for exercise 2.5.2
// Creating an array of ptrs on the heap 
// This program creates an array of ptrs to Point objects on the heap
// It initializes them, prints them out, and then deletes then and cleans up nicely
// Please see the stack-diagram.jpg file for my drawing of the memory layout

#include "point.hpp"
#include "circle.hpp"
#include "line.hpp"
#include <iostream>

int main(){
	// dynamically allocate an array of Point*
	Point** my_array = new Point*[3];
	// iterate through the array and dynamically allocate a Point object for each elemetn to point to 
	for (int i = 0; i < 3; ++i){
		my_array[i] = new Point();
		my_array[i]->X(i);			// we also assign each Point object unique x and y value pairs 
		my_array[i]->Y(i*2);
	}

	// this loop prints out the values
	for (int j = 0; j < 3; ++j){
		std::cout << "Point " << j << ": " << *(my_array[j]) << std::endl; // prints via ostream 
	}

	// the stack diagram i drew is at this point in the program (before we begin to delete dynamically allocated pointers)

	// this loop deletes the values 
	for (int k = 0; k < 3; ++k){
		delete my_array[k];
		std::cout << "Deleted item " << k << " of the array!\n";
	}

	delete[] my_array;

	std::cout << "Successfully deleted the arr!\n";
	// confirmed no memory leaks with valgrind ! :)
	return 0;
}

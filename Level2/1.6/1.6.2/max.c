// Ethan Furman 05/29/2026
// max.c 
// HW 2, Exercise 1.6.2
// This program calls and tests the MAX2(x,y) and MAX3(x,y,z) macros defined in defs.h 
// Note: find defs.h in directory ../1.6.1/
// Because defs.h is in a diff directory, I compiled with the following command:
		// g++ max.c -I../1.6.1 -o max

#include <stdio.h>
#include "defs.h"

int main() {
	int x, y, z;
	// init ints x, y, and z
		
	x = 10;
	y = 11;
	z = 12;

	printf("The max of %d and %d is %d\n", x, y, MAX2(x,y));
	printf("The max of %d, %d, and %d is %d\n", x, y, z, MAX3(x,y,z));
	
	// These macros also work for floats
	float a, b, c; // init floats
	
	a = 10.00001;
	b = 10.1;
	c = 11.0;

	printf("The max of %f, %f, and %f is %f\n", a, b, c, MAX3(a, b, c));


	return 0;
}

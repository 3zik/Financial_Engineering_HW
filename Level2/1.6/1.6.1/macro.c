// Ethan Furman 5/29/2026
// macro.c
// HW 2, Exercise 1.6.1
// This program uses macros defined in the file defs.h
// It defines two ints a and b and prints them using the macros

#include "defs.h"

int main(){
	int a, b; // init a, b
	// a, b can be assigned any int value
	a = 12;
	b = 24;

	// call Macros defined in macros.h
	PRINT1(a);
	PRINT2(a, b);


	return 0;
}

// Ethan Furman 05/29/2026
// defs.h
// HW 2, Exercise 1.6.1 AND Exercise 1.6.2
// This file defines macros PRINT1(a) and PRINT2(a, b) to print out a, and a and b respectively
// This file also defines macros MAX2(x,y) and MAX3(x,y,z) to return max values of given values 


#pragma once
// uses #pragra once guard to make sure each fn is defined once 

#include <stdio.h>

#define PRINT1(a) printf("a = %d\n", a)
#define PRINT2(a, b) printf("a = %d, b = %d\n", a, b)

#define MAX2(x,y) ( (x) > (y) ? (x) : (y) ) // Use ternary operator. Note that if x == y, then we are allowed to just use y 
#define MAX3(x,y,z) ( MAX2(x, (MAX2(y,z))) ) // Re-use MAX2 2x to create MAX3

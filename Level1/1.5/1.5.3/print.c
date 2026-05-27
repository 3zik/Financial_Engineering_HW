// Ethan Furman 05/27/26 
// print.c for HW 1.5, Exercise 3 
// this source file passes i by value, multiplies it by 2 and then prints the result 
// NOTE that this function does not pass by ref/pass by ptr, so i is only updated locally in the fn

#include <stdio.h> 
#include "print.h"


void print(int i) {
  
  i = i * 2;

  printf("%d\n", i);

}

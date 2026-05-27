// Ethan Furman 05/25/26
// shift.cpp for HW 1.3, Exercise 6
// This program highlights logical and arithmetic shift in C

#include <stdio.h>


int main(){
  int input;
  printf("Please input an integer to shift: ");
  scanf("%d", &input);

  // arithmetic shift (fills in with sign bit)
  int arith = input >> 2;

  // logical shift (fills in with 0s, no sign bit)
  unsigned int logical = ((unsigned int)input) >> 2;

  printf("Arithmetic shift result: %d\n", arith);
  printf("Logical shift result: %u\n", logical);
  
  // Compare pattern
  if (input < 0){
    printf("Arithmetic shift inserts 1s (filled in with sign bit).\n");
  } else {
    printf("Arithmetic shift propogates sign bit (same as logical shift for non-negative values).\n");
  }

  
  return 0;
}


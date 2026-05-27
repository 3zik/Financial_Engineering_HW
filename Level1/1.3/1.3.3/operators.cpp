// Ethan Furman 5/25/26
// operators.cpp for HW 1.3, Exercise 3
// This file explains the expected output of the given code and my reasoning

#include <stdio.h>

int main(){
  int x;
  x = -3+4*5-6;
  printf("x=%d\n", x);
  // x=11
  // Due to PEMDAS, multiplication happens first, then addition, then subtraction.
  // So, after multiplication, we have x = -3+20-6;
  // After addition, we have x = 17-6;
  // After subtraction, we have x = 11; (and then assignment)

  x = 3+4%5-6;
  printf("x=%d\n", x);
  // x=1
  // In C++, modulo has the same precedence as multiplication and division, so I have:
  // modulo, then addition, then subtraction.
  // So, after the modulo operator, we have: x = 3+4-6;
  // After addition, we have x=7-6;
  // After subraction, we have 1; (and then assignment)

  x = -3*4%-6/5;
  printf("x=%d\n", x);
  // x=0
  // Here, treat the -6/5 as though it is in paranthesis, so the order is:
  // multiplication, then division, then modulo.
  // So after multiplication: x = -12%-6/5;
  // After integer division: x = -12 % -1;
  // Since there is no remainder when we divide -12 by -1, x = 0;

  x = (7+6)%5/2;
  printf("x=%d\n", x);
  // x=1
  // The order is: start with paranthesis, then evalulate left to right for modulo and then division:
  // After adding: x = 13%5/2;
  // Then apply mod: x = 3/2;
  // Then perform integer division (and round to the value closer to 0) so x = 1;

  return 0;
}

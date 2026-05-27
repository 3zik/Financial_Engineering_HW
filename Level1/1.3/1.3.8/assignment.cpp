// Ethan Furman 5/25/26
// assignment.cpp for HW 1.3, Exercise 8
// This file explains the expected output of the given code and my reasoning

#include <stdio.h>

int main(){
  /* Assignment operators */
  int x=2;
  int y;
  int z;

  // x is 2 before this, and x*=3+2; is the same as x = x * (3+2);, x = 2*5;, so x = 10;
  x*=3+2;
  printf("x=%d\n", x);
  // Output is x=10

  x*=y=z=4;
  // The order goes z = 4, y = z (which is 4, so y = 4), and x*=y (which is 4). So, this statement is x*=4;
  // Since x = 10 from before, x *= 4; is the same as x = x*4, which is x = 10 * 4;
  printf("x=%d\n", x);
  // Output is x=40

  x=y==z;
  printf("x=%d\n", x);
  // The order of this is x = (y==z). The comparison y==z evaluates to true, because
  // above we assigned z = 4 and y = z. Thus, y==z is true. This is cast to an int an by default true is 1, so:
  // Output is x=1

  return 0;
}

// Ethan Furman 5/25/26
// conditional.cpp for HW 1.3, Exercise 9
// This file explains the expected output of the given code and my reasoning

/* Conditional expressions */

#include <stdio.h>

int main()
{
  int x=1;
  int y=1;
  int z=1;
  x+=y+=x; // y+=x gives y = 2. x+=y+=x gives x = 3.
  // So now: x = 3; y = 2; z = 1;
  printf("%d\n\n", (x<y)?y:x); // Number 1
  // y is not greater than x, so output is x (3).
  // Note the two '\n' chars as well.
  printf("%d\n", (x<y)?x++:y++); // Number 2
  // y is still not greater than x, so output is post decrement y, so prints 2, y becomes 3 after
  // Only 1 '\n' char, here.
  printf("%d\n", x); // Number 3
  // prints x, which has a value of 3 still. Then one '\n'.
  printf("%d\n", y); // Number 4
  // prints y, which is now 3. Then one '\n'.
  return 0;
}

// Overall output is then:
// 3
//
// 2
// 3
// 3

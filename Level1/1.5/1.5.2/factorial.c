// Ethan Furman 05/27/26
// factorial.c for HW 1.5, Exercise 2
// This program implements a recursive factorial function

// I noticed that in this function, we see that integer overflow occurs at n = 16
// At n = 17, the integer overflows and we get a negative output (for my machine)

#include <stdio.h>

int factorial(int n){
  // base cases for factorial are n == 0 and n == 1
  if (n == 0) return 1;
  if (n == 1) return 1;

  // one edge case check for negatives
  if (n < 0){
    return -1; // function fails for negative numbers
  }

  return n * factorial(n - 1);
}

int main(){
  int input;

  printf("Please input a positive integer: ");
  scanf("%d", &input);
  
  printf("The factorial of %d is %d.\n", input, factorial(input));

  return 0;
}

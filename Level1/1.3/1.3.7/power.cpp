// Ethan Furman 05/25/26
// power.cpp for HW 1.3, Exercise 7
// This program highlights how we can use bitshifts to do other operations

#include <stdio.h>

int main(){
  int number = 7;
  int n = 4;

  // Shifting by n bits is the same as multiplying by 2^n

  int result = number << n;

  printf("%d * 2^%d = %d\n", number, n, result);

  return 0;
}

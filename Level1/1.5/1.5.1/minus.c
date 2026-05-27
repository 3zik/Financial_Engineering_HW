// Ethan Furman 05/27/26
// minus.c for HW 1.5, Exercise 1
// This program shows an example of a function that takes in two ints and subtracts one from the other


#include <stdio.h>

int minus(int x, int y){
  // This function subtracts y from x
  return x - y;
}

int main(){
  int num1;
  int num2;

  printf("Please input an integer: ");
  scanf("%d", &num1);
  printf("Please input a second integer: ");
  scanf("%d", &num2);
  printf("The number %d minus the number %d is equal to %d.\n", num1, num2, minus(num1, num2));

  return 0;
}

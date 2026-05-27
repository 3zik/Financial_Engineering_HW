// Ethan Furman 05/27/26
// printnumber.cpp for HW 1.5, Exercise 4
// Recursively uses putchar() to print an int without using printf in C

#include <stdio.h>

void printnumber(int n){
  
  // make sure to handle negative nums 
  if (n < 0){
    putchar('-');
    n = -n;
  }

  if (n / 10){
    printnumber(n / 10);
  }

  putchar((n % 10) + '0');
}


int main(){
  printnumber(777798); // a few random examples
  putchar('\n');
  printnumber(1234568);
  putchar('\n');
  printnumber(-998);
  putchar('\n');

  return 0;
}


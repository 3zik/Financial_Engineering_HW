// Ethan Furman 5/25/26
// triangle.cpp for HW 1.3, Exercise 2
// This file takes in user input to compute the area of a triangle using scanf and printf
// The triangle area is calculating using floating point precision

#include <stdio.h>

float area(float base, float height){
  // a function that takes in 2 floats base and height
  // and calculates the area of a right triangle given that base and height
  return base * height / 2;
}


int main(){
  float height; // I chose a float for more precision
  float base;
  printf("Input the base (a float):\n");
  scanf("%f", &base);
  printf("Input the height (a float):\n");
  scanf("%f", &height);
  printf("With a base of %f and a height of %f, a triangle has area: %f!\n", base, height, area(base, height));


  return 0;
}

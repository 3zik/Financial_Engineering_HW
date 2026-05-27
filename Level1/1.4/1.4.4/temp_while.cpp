// Ethan Furman 05/26/26
// temp_while.cpp for HW 1.4, Exercise 4
// This program prints two columns on the screen with the temperature in degrees 
// Fahrenheit and the equivalent temperature in degrees Celsius.
// The left column shows temp in Fahrenheit, right shows temp in Celsius
// This program uses a while loop


#include <stdio.h>

float to_Celsius(float fahrenheit){
  return (5. / 9.) * (fahrenheit - 32.);
}

int main(){
  // Start at 0 F and go to 300 F with steps of 20 degrees
  float start_temp = 0.; // in Fahrenheit
  float end_temp = 300.; // in Fahrenheit
  float step_size = 20.; // step size in Fahrenheit
  
  float i = start_temp;

  printf("---TEMPERATURES---\n");
  
  while (i <= (end_temp - start_temp)) {
    printf("%10.1f degrees F -- %10.1f degrees C\n", i , to_Celsius(i));
    i = i + step_size;
  }

  return 0;
}

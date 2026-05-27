// Ethan Furman 05/25/26
// decrement.cpp for HW 1.3, Exercise 5
// This program shows the difference between --i and i--

#include <stdio.h>


int main(){
  int i = 5;
  int pre_result;
  int post_result;

  // pre-decrement
  pre_result = --i;
  // i becomes 9, and then pre_result is assigned 9
  printf("pre-decrement(--i): result = %i, i = %i.\n", pre_result, i);
  //reset i
  i = 5;
  //post-decrement example
  post_result = i--;
  // post result is assigned 10, THEN i becomes 9
  printf("post-decrement(i--): result = %i, i = %i.\n", post_result, i);

  return 0;
}

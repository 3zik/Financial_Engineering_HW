// Ethan Furman 05/26/26
// switch_case.cpp for HW 1.4, Exercise 3
// This program takes input from the user, and counts the amount of chars words and  newLines
// The user escapes with Ctrl+D
// This uses a do_while loop instead of a while loop (as done in Exercise 1)
// This program also uses a switch-case statement instead of if blocks

#include <stdio.h>

int main(){
  int c;
  int characters = 0;
  int words = 0;

  int newLines = 0;
  int inWord = 0;

  printf("Enter text (CTRL+D to end): \n");

  do {
    c = getchar();
  
    if (c == EOF){
      break;
    }

    characters++;
    switch (c) {
      case '\n':
        newLines++;
        inWord = 0;
        break;
      case ' ':
      case '\t':
        inWord = 0;
        break;
      default:
        if(inWord == 0){
          words++;
          inWord = 1;
        }
        break;
    }
  } while(1);

  printf("\nCharacters: %d\n", characters);
  printf("Words: %d\n", words);
  printf("Newlines: %d\n", newLines);

  return 0;
}

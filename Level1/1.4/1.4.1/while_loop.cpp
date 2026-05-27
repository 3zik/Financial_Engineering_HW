// Ethan Furman 05/26/26
// do_while.cpp for HW 1.4, Exercise 1
// This program takes input from the user, and counts the amount of chars words and  newLines
// The user escapes with Ctrl+D

#include <stdio.h>

int main(){
  int c;
  int characters = 0;
  int words = 0;

  int newLines = 0;
  int inWord = 0;

  printf("Enter text (CTRL+D to end): \n");

  while ((c = getchar()) != EOF){
    characters++;

    if (c=='\n'){
      newLines++;
    }

    // Check if the current char is whitespace or not
    
    if (c == ' '|| c == '\n' || c == '\t'){
      inWord = 0;
    } else{
      // new word starts
      if (inWord == 0){
        words++;
        inWord = 1;
      }
    }
  }

  printf("\nCharacters: %d\n", characters);
  printf("Words: %d\n", words);
  printf("Newlines: %d\n", newLines);

  return 0;
}

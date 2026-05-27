// Ethan Furman 05/26/26
// freq.c for HW 1.4, Exercise 7
// This program extends HW 1.4 Exercise 6 by explaining the frequency
// of the number 3 in words.
//

#include <stdio.h>

int main(){
  int c;

  int count0 = 0;
  int count1 = 0;
  int count2 = 0;
  int count3 = 0;
  int count4 = 0;
  int other = 0;

  printf("Type characters (CTRL+Z/CTRL+D to stop):\n");
  // Since I'm running on WSL (Ubuntu Linux), CTRL+Z gives signal SIGSTOP
  // So CTRL+D will work for linux, Ctrl + Z for other OS I think
  
  while ((c = getchar()) != EOF && c != 4 && c != 26){
    

    switch (c){
      
      case '0':
        count0++;
        break;
      case '1':
        count1++;
        break;

      case '2':
        count2++;
        break;

      case '3':
        count3++;
        break;

      case '4':
        count4++;
        break;
      
      default:
        other++;
        break;
    }
  }
  printf("\nOUTPUT:\n");
  printf("0 was typed:%d times\n", count0);
  printf("1 was typed:%d times\n", count1);
  printf("2 was typed:%d times\n", count2);
  printf("3 was typed:%d times\n", count3);
  printf("4 was typed:%d times\n", count4);
  printf("Other characters: %d\n", other);

  // Special case

  switch (count3){
    case 0:
      printf("Number three appears zero times.\n");
      break;
    
    case 1:
      printf("Number three appears one time.\n");
      break;

    case 2:
      printf("Number three appears two times.\n");
      break;
  
    default:
      printf("The number three appears more than two times.\n");
      break;
  }


  return 0;
}







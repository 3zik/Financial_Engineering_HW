// Ethan Furman 06/01/2026
// inputAndOutput.c 
// This C program reads chars from the keyboard and shows them onscreen
// The program ends when ^A is enetered

#include <stdio.h>

int main(){
	int c;
	char line[1000];
	int i = 0;

	while ((c = getchar()) != 1) { // 1 == Ctrl+A
		if (c == '\n') {
			line[i] = '\0';

			printf("%s\n", line);
			
			i = 0; // start a new line
		}
		else {
			line[i++] = (char)c;
		}
	}
	printf("CTRL + A is a correct ending.\n");

	return 0;
}

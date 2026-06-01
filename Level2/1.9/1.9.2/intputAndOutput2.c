// Ethan Furman 06/01/2026
// inputAndOutput2.c 
// Exercise 1.9.1
// This C program reads chars from the keyboard and writes them to a file
// The program ends when ^A is enetered

#include <stdio.h>

int main(){
	char filename[100];
	FILE *fp;
	printf("Enter output filename: ");
	scanf("%99s", filename);

	fp = fopen(filename, "w");

	if (fp == NULL){
		printf("Could not open filen\n");
		return 1;
	}

	// similar writing to Exercise 1.9.1 inputAndOutput.c 
	int c;
	char line[1000];
	int i =0;

	while ((c = getchar()) != 1) { // 1 == Ctrl+A
		if (c == '\n') {
			line[i] = '\0';

			fprintf(fp, "%s\n", line); //fprintf 
			
			i = 0; // start a new line
		}
		else {
			line[i++] = (char)c;
		}
	}
	printf("CTRL + A is a correct ending.\n");

	return 0;
}

// Ethan Furman 05/31/2026
// length.c
// This program uses given code for a string, and then adds code to clauclate length
// My function works by starting at the first char address and iterating through
// The loop stops at the null terminating character '\0' and counts the number of chars

/* Calculate the length of a string */

#include <stdio.h>

#define MAXLINE 30

// String length declaration
int Length(char str[]);

int main() {
	char string[MAXLINE+1]; // Line of maximum 30 chars + \0
	int c; // The input character
	int i=0; // The counter

	// Print intro text
	printf("Type up to %d chars. Exit with ^Z\n", MAXLINE);

	// Get the characters
	while ((c=getchar())!=EOF && i<MAXLINE) {
		// Append entered character to string
		string[i++]=(char)c;
	}
	string[i]='\0'; // String must be closed with \0

	printf("String length is %d\n", Length(string));

	return 0;
}

/* Implement the Length() function here */

int Length(char str[]){
	int len = 0;
	while (str[len] != '\0') { // this counts the "\n" character as well
		len++;
	}

	return len;
}

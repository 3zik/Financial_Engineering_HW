// Ethan Furman 05/31/2026
// swap.c 
// this program creates a function swap() that exchanges the values of two variables
// this is implemented via pass by value

#include <stdio.h>

void swap(int* x, int* y){ // pass by ptr doesn't need to return, changes vars outside the fn 
	int temp = *x; // gives int temp the value of x by dereferencing it
	*x = *y;
	*y = temp; // the value of y is set to x 
}

int main(){
	int i = 123; // initialize ints i and j in main 
	int j = 456;

	printf("The variable i has value %d, and the variable j has value %d\n", i, j);

	swap(&i, &j); // this function is pass by ptr 


	printf("The variable i has value %d, and the variable j has value %d\n", i, j);

	return 0;
}

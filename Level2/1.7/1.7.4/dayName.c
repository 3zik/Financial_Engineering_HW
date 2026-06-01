// Ethan Furman 05/31/2026
// dayName.c 
// This C program has a function dayName() which can print the day  of a given day number


#include <stdio.h>

void dayName(int dayNum){
	if (dayNum <= 0 || dayNum >= 8){
		printf("Please input a dayname number that is from 1 to 7. Exiting function...\n"); // handle bad input
	} else{

	
		// array of strings is really an array of char* 
		char* days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
		//  we do days[dayNum-1] because we want day 1 to be Sunday, and the array is 0 indexed
		printf("%d gives: Day %d is a %s.\n", dayNum, dayNum, days[dayNum - 1]);
	}
}

int main(){
	dayName(1);
	dayName(2);
	dayName(3);
	dayName(6);
	dayName(7);
	dayName(8); // Show off problem cases 
	dayName(0);
	return 0;
}

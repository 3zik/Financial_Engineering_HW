// Ethan Furman 6/1/2026
// article.c 
// This program implements a struct called article
// An article has an article number, quantity, and description (20 chars)
// This program tests the struct definition by implementing the struct and printing it with a defined Print() fn

#include <stdio.h>
#include <string.h> // need for strcpy


struct Article{
	int articleNumber;
	int quantity;
	char description[21]; // max len is 20 chars, plus null terminating char
};

void Print(struct Article* toBePrinted){ // pass-by-ptr
	printf("The article inputted has article number: %d\n", toBePrinted->articleNumber);
	printf("The article inputted has quantity: %d\n", toBePrinted->quantity);
	printf("The article inputted has description: %s\n", toBePrinted->description);

}

int main(){
	struct Article example; // example definition
	example.articleNumber = 255;
	example.quantity = 100;
	strcpy(example.description, "An example article"); // must use strcpy for string

	struct Article* ptr; // init a ptr
	
	ptr = &example;
	Print(ptr);


	return 0;
}

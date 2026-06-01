// Ethan Furman 05/31/2026
// ptr_arith.c 
// I predict outputs of the code given here

/* Predict what will be printed on the screen */
#include <stdio.h>

#define PRD(a) printf("%d", (a) ) // Print decimal
#define NL printf("\n"); // Print new line

// Create and initialize array
int a[]={0, 1, 2, 3, 4};

int main()
{
int i;
int* p;

for (i=0; i<=4; i++) PRD(a[i]); // 1
// For 1: we iterate through the loop
// So, we print 01234
NL;
for (p=&a[0]; p<=&a[4]; p++) PRD(*p); // 2
// For 2: p walks through the array from beginning to end.
// So: 01234
NL;
NL;
for (p=&a[0], i=0; i<=4; i++) PRD(p[i]); // 3
// Since p == &a[0]:
	// p[i] == *(p+i) == a[i]
// So the output is 01234
NL;
for (p=a, i=0; p+i<=a+4; p++, i++) PRD(*(p+i)); // 4
// For 4, we have to consider the cases for each iteration:
// at iteration i = 0: p points to a[0] and p+i points to a[0] with a value 0
// at iteration i = 1: p points to a[1] and p+i points to a[2] with a value of 2
// at iteration i = 2: p points to a[2] and p+i points to a[4] with a value of 4
// the next iteration would give a+6 so the loop stops
// The output is then 024
NL;
NL;

for (p=a+4; p>=a; p--) PRD(*p); // 5

// For 5: we walk backwards, so we the get the output 43210
NL;

for (p=a+4, i=0; i<=4; i++) PRD(p[-i]); // 6

// For 6: we must remember that p[-i] == *(p - i)
// So: p[0] -> a[4] ->4
// p[-1]->a[3]->3
// p[-2]->a[2]->2
// p[-3]->a[1]->1
// p[-4]->a[0]->0
// Output is: 43210

NL;

for (p=a+4; p>=a; p--) PRD(a[p-a]); // 7

// For 7: p-a gives the element that p points to so:
// p points to a+4 and p-a has a value 4, a[p-a] has value 4
// p points to a+3 and p-a has value 3, a[p-a] has value 3
// p points to a+2 and p-a has a value 2, a[p-a] has value 2
// p points to a+1 and p-a has value 1, a[p-a] has value 1
// p points to a+0 and p-a has a value 0, a[p-a] has value 0
// The output is then 43210 
NL;
return 0;
// final output wiht spaces is:
// 01234
// 01234

// 01234
// 024

// 43210
// 43210
// 43210
}

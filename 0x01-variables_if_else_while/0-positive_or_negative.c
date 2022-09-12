#include <stdlib.h>

#include <time.h>

#include <stdio.h>


/*
 * main : display a simple text if the number n is positive or negative
 * description: this program  checks if a random number is positive or negative
 * return 0
 */

int main(void)

{

	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	
	if(n==0)
		printf("%d is zero\n", n);

	if(n<0)
		printf("%d is negative\n", n);
	if(n>0)
		printf("%d is positive\n", n);
	
 	return (0);

}

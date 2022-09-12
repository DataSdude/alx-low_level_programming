#include <stdlib.h>

#include <time.h>

#include <stdio.h>


/**
 * * main - Entry point
 * * description: this c program is used to check if a random variable is null, positive or negative
 * * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%d is zero\n", n);
	if (n < 0)
		printf("%d is negative\n", n);
	if (n > 0)
		printf("%d is positive\n", n);
	return (0);
}

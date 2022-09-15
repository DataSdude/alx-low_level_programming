#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * fizz_buzz - function of wellknown fizzbuzz written in c
 * retuen - none
 */

void fizz_buzz(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
			printf("Fizz ");
		if (i % 5 == 0 && i % 3 != 0)
			printf("Buzz ");
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		if (i % 3 != 0 && i % 5 != 0)
			printf("%d ", i);
	}
	printf("\n");
}

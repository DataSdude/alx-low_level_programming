#include <stdlib.h>

#include <stdio.h>


/**
 * * main - Entry point
 * * description: program tp print the alphabet in lower and upper case
 * * Return: Always 0 (Success)
 */



int main(void)

{

	int i, j = 0;

	while (i < 26)
	{
		putchar(i + 'a');
		i++;
	}


	while (j < 26)
	{
		putchar(j + 'A');
		j++;
	}

	putchar('\n');

	return (0);

}

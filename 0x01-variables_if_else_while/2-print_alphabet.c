#include <stdio.h>
#include <stdlib.h>

/**
 * * main - Entry point
 * * description: Program that prints the alphabet in lowercase
 * * Return: Always 0 (Success)
 */

int main(void)
{

	int i = 0;

	while (i < 26)
	{
		putchar(i + 'a');
		i++;
	}

	putchar('\n');

	return (0);
}

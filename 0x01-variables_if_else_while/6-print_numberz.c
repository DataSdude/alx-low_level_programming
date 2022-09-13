#include <stdlib.h>

#include <stdio.h>

/**
 *
 * * main - Entry point
 *
 * * description: program to print all single digit numbers of base 10
 *
 * * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
		putchar(i + 48);

	putchar('\n');

	return (0);
}

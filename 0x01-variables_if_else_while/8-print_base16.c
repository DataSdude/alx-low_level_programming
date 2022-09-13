#include <stdlib.h>

#include <stdio.h>

/**
 * * main - Entry point
 * * description: program tp print the numbers of base 16
 * * Return: Always 0 (Success)
 */


int main(void)
{
	int i, j = 0;

	for (i = 0; i < 10; i++)
		putchar(48 + i);

	for (j = 0; j < 6; j++)
		putchar(97 + j);

	putchar('\n');

	return (0);	

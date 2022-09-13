#include <stdlib.h>

#include <stdio.h>

/**
 * * main - Entry point
 * * description: program to print lowercase alphabet in reverse
 * * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	for (i = 0; i < 26; i++)
		putchar(122 - i);

	putchar('\n');

	return (0);
}

#include <stdlib.h>

#include <stdio.h>

/**
 * * main - Entry point
 *
 * * description: program tp print the alphabet in lowercase except e and q
 *
 * * Return: Always 0 (Success)
 */


int main(void)

{
	int i = 0;

	for (i = 0; i < 26; i++)
	{
		if (i == 4 || i == 16)
			continue;
		putchar(i + 'a');
	}

	putchar('\n');

	return (0);
}

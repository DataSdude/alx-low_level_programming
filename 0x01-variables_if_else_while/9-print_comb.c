#include <stdlib.h>

#include <stdio.h>


/**
 * * main - Entry point
 * * description: program to print possible combo of single digit numbers
 * * Return: Always 0 (Success)
 */

int main(void)

{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		putchar(i + 48);
		if (i != 9)
		{
			putchar(44);
			putchar(32);
		}
	}

	putchar('\n');

	return (0);
}

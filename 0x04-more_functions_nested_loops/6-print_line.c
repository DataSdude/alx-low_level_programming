#include "main.h"
#include <stdio.h>

/**
 * print_line - function that prints a straight line to
 * the terminal
 * @n - input number of line
 * Return - nothing
 */

void print_line(int n)
{
	int i = 0;
	
	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}

	_putchar('\n');
}

#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - function that prints numbers from 0 to 9
 * without printing 2 and 4
 * no input
 * Return - none
 */

void print_most_numbers(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
			_putchar('0' + i);
	}

	_putchar('\n');
}

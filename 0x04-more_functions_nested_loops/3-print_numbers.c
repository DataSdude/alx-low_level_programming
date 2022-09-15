#include "main.h"
#include <stdio.h>

/**
 * print_numbers - function to print numbers from 0 to 9
 * no inputs
 * return - none
 */

void print_numbers(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
		_putchar('0' + i);

	_putchar('\n');
}

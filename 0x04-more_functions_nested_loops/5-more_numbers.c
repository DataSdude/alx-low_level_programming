#include "main.h"
#include <stdio.h>

/**
 * more_numbers - func to print nums from 0 to 14 10 times
 * input - none
 * Return - none
 */

void more_numbers(void)
{
	int i, j = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
			{
				_putchar('0' + 1);
				_putchar('0' + (j % 10));
			}
			else
				_putchar('0' + j);
		}

		_putchar('\n');
	}
}

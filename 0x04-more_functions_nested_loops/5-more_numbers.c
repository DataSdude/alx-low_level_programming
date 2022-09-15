#include "main.h"
#include <stdio.h>

/**
 * more_numbers - function to print nums from 0 to 14 10 times
 * Return - none
*/

void more_numbers(void)
{
	int i, j, x = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			x = j;
			if (j >= 10)
			{
				_putchar(1 + 48);
				x = j % 10;
			}
			
			_putchar(x + 48);
		}

		_putchar('\n');
	}
}

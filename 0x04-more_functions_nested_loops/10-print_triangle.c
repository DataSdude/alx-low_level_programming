#include "main.h"

#include <stdio.h>

/**
 * *print_triangle- function to print a triangle of '#'
 * *@n - input numer of lines
 * *Return - always 1
 */

void print_triangle(int n)
{
	int i, j;
	
	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if ((i + j) <= n)
					_putchar(' ');

				else
					_putchar('#');

			}

			_putchar('\n');
		}
	}
}

#include "main.h"

/*
 * print_sign: function that checks
 * *the sign of a number
 *
 * @n: checks input
 *
 * return: 1 Success(always)
 */

int print_sign(int n)
{
	if (n >= 1)
	{	
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

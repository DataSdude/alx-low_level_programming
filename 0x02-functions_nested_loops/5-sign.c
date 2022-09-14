#include "main.h"

/*
 * *print_sign - function to check the
 * sign of a number
 *
 * * @n: checks input of function
 *
 * return: 1 if n is positive
 *         0 if n is nil
 *         -1 if n is negative
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

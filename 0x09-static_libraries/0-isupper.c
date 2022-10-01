#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _isuopper - function to check if a char
 * is uppercase
 * @c - input
 *Return - 1 is c is uppercase
 *	0 if not
 */

int _isupper(int c)
{
	if ((c <= 90) && (c >= 65))
		return (1);

	else
		return (0);
}

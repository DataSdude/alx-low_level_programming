#include "main.h"

#include <stdio.h>

/*
 * *_isdigit - func to check if a char is digit
 * *@c - input to check agaisnt
 * *Return - 1 if true 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c<= 57)
		return (1);
	else
		return (0);
}

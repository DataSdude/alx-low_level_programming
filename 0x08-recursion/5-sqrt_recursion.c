#include "main.h"

/**
 * helper - Finds the square root of two numbers
 * @a: The number
 * @b: The number to test for the square root of @a
 * Return: square root
 */

int test_func(int a, int b)
{
	if (b * b > a)

		return (-1);

	else if (b * b == a)

		return (b);

	else
		return (test_func(a, b + 1));

	return (1);

}


/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to return the square root of
 * Return: the square root of @n
 */


int _sqrt_recursion(int n)
{
	if (n == 0)

		return (0);

	return (test_func(n, 1));
}

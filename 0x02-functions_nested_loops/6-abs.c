#include "main.h"

/**
 *  * _abs - function that computes the absolute
 *
 *   *       value of an integer
 *
 *    *
 *
 *     * @n: takes in integer type input for function
 *
 *      *
 *
 *       * Return: n if n is positive
 *       		-n if n is negative 
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);

	return (-n);
}

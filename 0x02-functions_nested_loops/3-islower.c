#include"main.h"


/**
*  *_islower - function to check if
*   *   character is lowercase
*    * @c: checks input of function
*
*      * Return: returns 1 if `c` is lowercase
*
*       *         otherwise always 0 (Success)
*/


int _islower(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 48 && c <= 58))
		return (1);

	else
		return (0);
}

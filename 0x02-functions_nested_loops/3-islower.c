#include"main.h"



/**
 *  * _islower - function that checks if a character is lowercase
 *  * return : 1 if lowercase, 0 if not
 */


int _islower(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 48 && c <= 58))
		return (1);

	else
		return (0);
}

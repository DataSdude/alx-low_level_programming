#include"main.h"



/**
 *  * print_alphabet - utilizes on the _putchar function to print the alphabet a - z
 */

void print_alphabet(void)
{
	int i =0;

	while (i < 26)
	{
		_putchar(i + 'a');
		
		i++;
	}
	
	_putchar('\n');
}

#include"main.h"


/**
 *  *print_alphabet - utilizes on the _putchar function
 *  *to print the alphabet a - z  ten times
 */



void print_alphabet_x10(void)
{
	int i, j = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 26; j++)
			_putchar(j + 'a');
		_putchar('\n');
	}

}

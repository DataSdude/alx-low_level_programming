#include"main.h"


/**
 * *print_alphabet_x10 - function that will print the alphabet 10 times
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

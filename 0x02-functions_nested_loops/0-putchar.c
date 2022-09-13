#include "main.h"

/**
 * * main - Entry point
 * * description: program to print _putchar using putchar prototype
 * * Return: Always 0 (Success)
 */

int main(void)
{
	char str[] = "_putchar";

	int x;

	for (x = 0; x < 8; ++x)

		_putchar(str[x]);

	_putchar('\n');

	return (0);
}

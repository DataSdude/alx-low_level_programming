#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description - Program that prints the alphabet in lowercase
 * return (0>
 */

int main(void){
	
	int i = 0;

	while(i < 26) {
		putchar(i + 'a');
		putchar('\n');
		i++;
	}

	return (0);
}

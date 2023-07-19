/* this program prints _putchar to the screen */

#include "main.h"

/**
 * print_alphabet - the starting point of the program
 */
void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}

/* this program prints _putchar to the screen */

#include "main.h"

/**
 * print_alphabet_x10 - the starting point of the program
 */
void print_alphabet_x10(void)
{
	char i;
	int n;

	for (n = 1; n <= 10; n++)
	{
		i = 'a';
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
	}
}

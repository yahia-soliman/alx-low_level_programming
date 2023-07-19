/* this program prints _putchar to the screen */

#include "main.h"

void print_alphabet(void);

/**
 * main - the starting point of the program
 * Return: 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}

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

#include "main.h"

/**
 * print_rev - prints a string, reversed.
 * @str: the string we want to print
 */
void print_rev(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	while (i > 0)
		_putchar(str[--i]);

	_putchar('\n');
}

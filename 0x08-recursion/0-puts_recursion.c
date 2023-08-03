#include "main.h"

/**
 * _puts_recursion - prints a string followed by new line
 * @s: location of the first character of the string in memory
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
		_putchar('\n');
	else
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
}

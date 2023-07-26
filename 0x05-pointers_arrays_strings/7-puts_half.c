#include "main.h"

/**
 * puts_half - prints the last half a string
 * @str: the string
 */
void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	i = (i + 1) / 2;

	while (str[i] != '\0')
		_putchar(str[i++]);

	_putchar('\n');
}

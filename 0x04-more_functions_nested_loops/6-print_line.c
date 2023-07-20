#include "main.h"

/**
 * print_line - prints a line with specefied lenght
 * @n: the lenght of the line
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');

	_putchar('\n');
}

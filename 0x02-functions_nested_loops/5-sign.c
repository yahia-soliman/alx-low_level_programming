#include "main.h"

/**
 * print_sign - Prints the sign of given number
 * @n: the number to be checked
 * Return: 1 for positive, -1 for negative, 0 for 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

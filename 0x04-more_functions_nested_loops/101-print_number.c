#include "main.h"

/**
 * print_number - prints a number
 * @n: an int needs a print
 */
void print_number(int n)
{
	int i = 1;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	while (n != n % (i * 10))
		i *= 10;

	while (i >= 1)
	{
		_putchar(n / i + '0');
		n %= i;
		i /= 10;
	}
}

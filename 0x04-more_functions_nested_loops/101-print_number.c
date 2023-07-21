#include "main.h"

/**
 * print_number - prints a number
 * @n: an int needs a print
 */
void print_number(int n)
{
	int i = 1;
	unsigned int m = n;

	if (n < 0)
	{
		_putchar('-');
		m = n * -1;
	}

	while (m != m % (i * 10))
		i *= 10;

	while (i >= 1)
	{
		_putchar(m / i + '0');
		m %= i;
		i /= 10;
	}
}

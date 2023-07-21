#include "main.h"
/**
 * print_number - prints a number
 * @n: an int needs a print
 */
void print_number(int n)
{
	unsigned int i = 1;
	unsigned int m = n;

	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}

	while (m != m % (10 * i))
	{
		i *= 10;
		if ((i * 10) % 10 != 0)
			break;
	}

	while (i >= 1)
	{
		_putchar(m / i + '0');
		m %= i;
		i /= 10;
	}
}

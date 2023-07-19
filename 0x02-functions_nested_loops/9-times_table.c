#include "main.h"
/**
 * times_table - Prints every minute of the day
 */
void times_table(void)
{
	int i, j;

	for (j = 0; j <= 9; j++)
	{
		_putchar('0');
		for (i = 1; i <= 9; i++)
		{
			_putchar(',');
			_putchar(' ');

			if (i * j / 10)
				_putchar(i * j / 10 + '0');
			else
				_putchar(' ');

			_putchar(i * j % 10 + '0');
		}
		_putchar('\n');
	}
}

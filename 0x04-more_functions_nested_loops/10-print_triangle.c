#include "main.h"

/**
 * print_triangle - prints triangle
 * @n: the size of the triangle
 */
void print_triangle(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j < (n - i - 1))
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
	if (n < 1)
		_putchar('\n');
}

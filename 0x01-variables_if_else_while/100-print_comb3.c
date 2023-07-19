/*  This program prints all combinations of 2 numbers */

#include <stdio.h>

/**
 * main - the starting point of the program.
 * Return: 0 for sucsess
 */
int main(void)
{
	int i = '0';
	int x = '1';

	while (i < '9')
	{
		while (x <= '9')
		{
			putchar(i);
			putchar(x);
			if (i != '8' || x != '9')
			{
				putchar(',');
				putchar(' ');
			}
			x++;
		}
		x = ++i + 1;
	}
	putchar('\n');
	return (0);
}

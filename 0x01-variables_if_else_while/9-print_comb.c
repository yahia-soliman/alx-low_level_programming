/*  This program prints the lower case alphabet */

#include <stdio.h>

/**
 * main - the starting point of the program.
 * Return: 0 for sucsess
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		if (i < '9')
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}

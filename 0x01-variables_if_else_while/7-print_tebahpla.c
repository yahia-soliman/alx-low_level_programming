/*  This program prints the lower case alphabet */

#include <stdio.h>

/**
 * main - the starting point of the program.
 * Return: 0 for sucsess
 */
int main(void)
{
	int i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}

/*  This program prints the lower case alphabet */

#include <stdio.h>

/**
 * main - the starting point of the program.
 * Return: 0 for sucsess
 */
int main(void)
{
	int i = '0';
	int j = 'a';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	while (j <= 'f')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}

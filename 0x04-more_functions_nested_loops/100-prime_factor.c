/* this program finds the largist prime factor for n */

#include <stdio.h>

/**
 * main - everything we need
 * Return: 0 if done
 */
int main(void)
{
	long int i = 2, n = 612852475143;

	while (i < n / 2)
	{
		if (n % i == 0)
			n /= i;
		else
			i++;
	}
	printf("%li\n", n);
	return (0);
}

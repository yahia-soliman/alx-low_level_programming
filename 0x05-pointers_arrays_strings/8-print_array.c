#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the first n elements of an array
 * @a: the array
 * @n: wanted number of elements
 */
void print_array(int *a, int n)
{
	int i = 0;

	if (n > 0)
	{
		n--;
		while (a[i + 1] != '\0')
			i++;

		if (n > i)
			n = i;

		for (i = 0; i < n; i++)
			printf("%d, ", a[i]);
		printf("%d\n", a[n]);
	}
	else
		_putchar('\n');
}

#include <stdio.h>
/**
 * print_diagsums - sum of every diagonal of a matrix
 * @m: first element of the square matrix
 * @n: number of rows = number of columns
 */
void print_diagsums(int *m, int n)
{
	int h, v, sum1, sum2;

	sum1 = v = sum2 = 0;
	while (v < n)
	{
		h = 0;
		while (h < n)
		{
			if (h == v)
				sum1 += m[(v * n) + h];
			if (v == n - (h + 1))
				sum2 += m[(v * n) + h];
			h++;
		}
		v++;
	}
	printf("%d, %d\n", sum1, sum2);
}

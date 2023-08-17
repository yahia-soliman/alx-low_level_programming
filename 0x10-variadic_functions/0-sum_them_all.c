#include <stdarg.h>
/**
 * sum_them_all - calculate sum of all given args
 * @n:  number of given numbers
 * Return: sum of given numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i = 0;
	va_list args;

	va_start(args, n);
	while (i < n)
	{
		sum += va_arg(args, int);
		i++;
	}
	return (sum);
}

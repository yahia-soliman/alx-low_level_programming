#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers in std output
 *
 * @separator:     specify the separator string
 * @n:          number of given numbers to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;

	va_start(args, n);
	while (i < n)
	{
		if (i > 0 && separator)
			printf("%s", separator);
		printf("%d", va_arg(args, int));
		i++;
	}
	printf("\n");
}

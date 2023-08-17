#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings in std output
 *
 * @separator:     specify the separator string
 * @n:          number of given strings to print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *arg;
	va_list args;

	va_start(args, n);
	while (i < n)
	{
		if (i > 0 && separator)
			printf("%s", separator);
		arg = va_arg(args, char *);
		if (arg)
			printf("%s", arg);
		else
			printf("(nil)");
		i++;
	}
	printf("\n");
}

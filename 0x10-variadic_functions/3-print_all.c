#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void pc(va_list args);
void pi(va_list args);
void pf(va_list args);
void ps(va_list args);
/**
 * print_all - prints anything with any type
 * @format:    string of given argument type
 * {i, c, f, s} for {int, char, float, string}
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int x, y;
	char *sep = "";
	void (*ptrf)(va_list);
	func arr[4] = {
		{'c', pc},
		{'i', pi},
		{'f', pf},
		{'s', ps},};

	va_start(args, format);
	x = 0;
	while (format && format[x])
	{
		y = 0;
		while (y < 4)
		{
			if (arr[y].c == format[x])
			{
				printf("%s", sep);
				ptrf = arr[y].f;
				ptrf(args);
				sep = ", ";
			}
			y++;
		}
		x++;
	}
	printf("\n");
}

/**
 * pc -   prints a character
 * @args: variadic args list
 */
void pc(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * pi -   prints an  integer
 * @args: variadic args list
 */
void pi(va_list args)
{
	printf("%i", va_arg(args, int));
}

/**
 * pf -   prints a     float
 * @args: variadic args list
 */
void pf(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * ps -   prints a    string
 * @args: variadic args list
 */
void ps(va_list args)
{
	char *s = va_arg(args, char *);

	if (s)
	{
		printf("%s", s);
		return;
	}
	printf("(nil)");
}

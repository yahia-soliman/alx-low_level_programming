#include "main.h"
/**
 * print_binary - prints a number in the binary form
 * @n: the number!
 */
void print_binary(unsigned long int n)
{
	if (n >> 1)
		print_binary(n >> 1);
	_putchar('1' - (~n & 1));
}

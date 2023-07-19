/* this program prints _putchar to the screen */

#include "main.h"

/**
 * main - the starting point of the program
 * Return: 0
 */
int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
	return (0);
}

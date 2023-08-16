#include <stdlib.h>
/**
 * print_name - prints a name
 * @name:       name to print
 * @f:    formatting function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}

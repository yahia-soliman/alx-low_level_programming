#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - the entry point of the program
 * @argc: the count of command agruments
 * @argv: array contains input arguments
 * Return: zero if  successfully excuted
 */
int main(int argc, char **argv)
{
	int a, b;
	int (*f)(int, int);

	if (argc != 4)
	{
		puts("Error");
		return (98);
	}

	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		puts("Error");
		return (99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", f(a, b));
	return (0);
}

#include <stdio.h>
/**
 * main - program that prints its name
 * @argc: command line arguments count
 * @argv: array of command's arguments
 * Return: success
 */
int main(int argc, char **argv)
{
	(void) argc;
	puts(*argv);
	return (0);
}

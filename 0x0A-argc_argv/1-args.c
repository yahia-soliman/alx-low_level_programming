#include <stdio.h>
/**
 * main - prints number of passed args
 * @argc: command line arguments count
 * @argv: array of command's arguments
 * Return: success
 */
int main(int argc, char **argv)
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}

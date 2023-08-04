#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints its name
 * @argc: command line arguments count
 * @argv: array of command's arguments
 * Return: success
 */
int main(int argc, char **argv)
{
	if (argc == 3)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	else
		puts("Error");

	return (0);
}

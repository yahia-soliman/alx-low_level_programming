#include <stdio.h>
/**
 * main - program that prints its args
 * @argc: command line arguments count
 * @argv: array of command's arguments
 * Return: success
 */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}

#include <stdio.h>

/**
 * main - you know what it is
 * Return: 1
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(str, sizeof(char), sizeof(str) - 1, stderr);
	return (1);
}

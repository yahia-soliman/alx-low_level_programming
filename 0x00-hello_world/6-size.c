/*  This program prints an important message */

#include <stdio.h>

/**
 * main - the starting point of the program.
 * Return: 0 for sucsess
 */
int main(void)
{
	printf("Size of a char: %li byte(s)\n",sizeof(char));
	printf("Size of an int: %li byte(s)\n",sizeof(int));
	printf("Size of a long int: %li byte(s)\n",sizeof(long int));
	printf("Size of a long long int: %li byte(s)\n",sizeof(long long int));
	printf("Size of a float: %li byte(s)\n",sizeof(float));
	return (0);
}

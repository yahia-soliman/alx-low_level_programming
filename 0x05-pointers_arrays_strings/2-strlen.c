#include "main.h"

/**
 * _strlen - length of a string
 * @s: the address of the first char
 * Return: how many char in a string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}


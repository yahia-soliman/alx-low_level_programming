#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - makes a copy of a string in memory
 * @str:                     a  string
 * Return: pointer to the new double of the string
 */
char *_strdup(char *str)
{
	int len, i;
	char *dup;

	if (str == NULL)
		return (str);

	len = i = 0;
	while (str[len++] != 0)
		;

	dup = (char *)malloc(len * sizeof(char));

	while (dup != NULL && i <= len)
	{
		*(dup + i) = str[i];
		i++;
	}
	return (dup);
}

#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of charactes to concat whilem s2
 * Return: the result of concatenation
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *r = NULL, z[1] = {0};
	unsigned int i = 0, j = 0;

	if (s1 == NULL)
		s1 = z;
	if (s2 == NULL)
		s2 = z;

	while (s1[i] != 0)
		i++;
	while (s2[j] != 0)
		j++;
	if (n > j)
		n = j;

	r = malloc(sizeof(char) * (i + n + 1));
	if (r == NULL)
		return (r);

	for (j = 0; j < i; j++)
		*(r + j) = s1[j];
	for (j = 0; j < n; j++)
		*(r + i + j) = s2[j];
	*(r + i + j) = 0;

	return (r);
}

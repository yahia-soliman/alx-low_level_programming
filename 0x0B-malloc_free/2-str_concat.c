#include <stdlib.h>

/**
 * str_concat - canatenates two strings
 * @s1: first  string
 * @s2: second string
 * Return: pointer to concated result
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i;
	char *r, s0[] = {0};

	len1 = len2 = i = 0;

	if (s1 == NULL)
		s1 = s0;
	else
	{
		while (s1[len1] != 0)
			len1++;
	}
	if (s2 == NULL)
		s2 = s0;
	else
	{
		while (s2[len2] != 0)
			len2++;
	}
	len2 += len1;


	r = malloc(sizeof(char) * len2 + 1);
	while (r != NULL && i < len1)
	{
		*(r + i) = s1[i];
		i++;
	}
	while (r != NULL && i <= len2)
	{
		*(r + i) = s2[i - len1];
		i++;
	}
	return (r);
}

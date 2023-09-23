/**
 * _strstr - finds the first  occurence  of s2 in s1
 * @s1: the string to search inside
 * @s2: the string to search  about
 * Return: the adress of the first match of s2 in s1
 */
char *_strstr(char *s1, char *s2)
{
	int i = 0, j;

	while (s1 && s2 && s1[i])
	{
		j = 0;
		while (s1[i + j] && s2[j] && s2[j] == s1[i + j])
			j++;
		if (s2[j] == 0)
			return (s1 + i);
		i++;
	}

	return ((void *) 0);
}

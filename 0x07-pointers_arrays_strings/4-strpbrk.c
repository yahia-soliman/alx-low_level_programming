/**
 * _strpbrk - searches if any byte from s2 is in s1
 * @s1: the string to search inside
 * @s2: the list of character to find at least one
 * Return: pointer to a typecal char if found
 */
char *_strpbrk(char *s1, char *s2)
{
	int i = 0, j;

	while (s1 && s2 && s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s2[j] == s1[i])
				return (s1 + i);
			j++;
		}
		i++;
	}

	return ((void *) 0);
}

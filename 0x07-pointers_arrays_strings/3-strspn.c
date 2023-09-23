/**
 * _strspn - how many times a char form substring appeard in the prefix of a word
 * @s: string to search in
 * @c: character to locate
 * Return: address of the first c or NULL if not found
 */
unsigned int _strspn(char *s, char *ss)
{
	int i, j, n;

	i = n = 0;
	while (s && ss && ss[i])
	{
		j = 0;
		while (s[j] && s[j] != ' ')
		{
			if (s[j] == ss[i])
				n++;
			j++;
		}
		i++;
	}

	return (n);
}

/**
 * _strchr - locates a character in a string
 * @s: string to search in
 * @c: character to locate
 * Return: address of the first c or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i = -1;

	if (s)
	{
	do {
		i++;
		if (s[i] == c)
			return (s + i);
	} while (s[i])
	}

	return ((void *) 0);
}

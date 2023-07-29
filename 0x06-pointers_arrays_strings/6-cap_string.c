/**
 * cap_string - capitalizes all words of a string
 * @s: string to convert
 * Return: converted string
 */
char *cap_string(char *s)
{
	char sep[] = " \t\n,;.!?\"(){}";
	int i, j;

	i = 0;
	if (*s > 96 && *s < 123)
		*s -= 32;

	while (s[i] != 0)
	{
		for (j = 0; sep[j] != 0; j++)
		{
			if (s[i] == sep[j])
				break;
		}
		i++;

		if (sep[j] != 0 && s[i] > 96 && s[i] < 123)
			*(s + i) -= 32;
	}
	return (s);
}

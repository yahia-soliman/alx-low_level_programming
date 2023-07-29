/**
 * string_toupper - converts every letters to uppercase
 * @s: string to convert
 * Return: converted string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		if (s[i] > 96 && s[i] < 123)
			*(s + i) -= 32;
		i++;
	}
	return (s);
}

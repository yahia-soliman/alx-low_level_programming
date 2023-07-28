/**
 * leet - encodes a string into 1337
 * @s: the given string
 * Return: leet @s
 */
char *leet(char *s)
{
	int i = 0, j = 0;
	char in[10] = "aAeEoOtTlL";
	char out[10] = "4433007711";

	while (s[i] != 0)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == in[j])
				s[i] = out[j];
		}
		i++;
	}
	return (s);
}

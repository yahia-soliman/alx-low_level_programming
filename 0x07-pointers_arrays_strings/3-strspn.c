/**
 * _strspn - how many times a char form substring
 *           appeard in the prefix of a word
 * @s:  string to search in
 * @ss: substring to locate
 * Return: how many time characters from ss in s
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

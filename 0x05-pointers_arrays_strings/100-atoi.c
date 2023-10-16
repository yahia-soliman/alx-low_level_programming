/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 * Return: the converted number
 */
int _atoi(char *s)
{
	int signal = 1, i = 0;
	unsigned int total = 0;

	if (!s)
		return (0);

	while (s[i] && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			signal *= -1;
		i++;
	}
	while (s[i] && s[i] >= '0' && s[i] <= '9')
	{
		total *= 10;
		total += s[i] - '0';
		i++;
	}
	return (total * signal);
}

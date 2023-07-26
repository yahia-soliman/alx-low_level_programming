/**
 * rev_string - reverses a string.
 * @str: the string we want to reverse.
 */
void rev_string(char *str)
{
	int i = 0;
	int j = 0;
	char c;

	while (*(str + i) != '\0')
		i++;

	while (i > j)
	{
		i--;
		c = *(str + i);
		*(str + i) = *(str + j);
		*(str + j) = c;
		j++;
	}
}

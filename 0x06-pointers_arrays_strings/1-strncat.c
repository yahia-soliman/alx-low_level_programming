/**
 * _strncat - concatenates two strings
 * @dest: the string we are abbending to
 * @src: what we are abbending
 * @n: abbend at most n characters
 * Return: updated @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = -1;

	if (n > 0)
	{
		while (dest[i] != 0)
			i++;

		do {
			j++;
			*(dest + i + j) = src[j];
		} while (src[j] != 0 && j != n - 1);
	}
	return (dest);
}

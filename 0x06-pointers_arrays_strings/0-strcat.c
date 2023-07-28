/**
 * _strcat - concatenates two strings
 * @dest: the string we are abbending to
 * @src: what we are abbending
 * Return: updated @dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = -1;

	while (dest[i] != 0)
		i++;

	do {
		j++;
		*(dest + i + j) = src[j];
	} while (src[j] != 0);

	return (dest);
}

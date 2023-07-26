/**
 * _strcpy - copies a string from source to destnation
 * @src: the source of string
 * @dest: the destnation
 * Return: a copy of the string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	do {
		*(dest + i) = src[i];
		i++;
	} while (src[i - 1] != '\0');

	return (dest);
}

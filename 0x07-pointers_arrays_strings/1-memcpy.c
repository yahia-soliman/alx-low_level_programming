/**
 * _memcpy - copies text from memory area to another
 * @dest: first byte to put the text into
 * @src: fist byte to copy from
 * @n: number of bytes to copy
 * Return: the copied text (not including \0)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}

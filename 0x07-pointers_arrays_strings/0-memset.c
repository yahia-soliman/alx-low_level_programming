/**
 * _memset - fills memory with a constant byte
 * @s: the address of the first byte
 * @b: constant byte (character) to write on memory
 * @n: number of bytes to fill starting from
 * Return: pointer to s after modification
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}

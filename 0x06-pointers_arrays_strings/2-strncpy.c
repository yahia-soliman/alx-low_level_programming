/**
 * _strncpy - copies at most n characters
 * ِِ@src: the source it yanks from
 * @dest: the destination it puts into
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && dest[i] != '\0')	
	{
		*(dest + i) = src[i];
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}

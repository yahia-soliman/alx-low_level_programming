/**
 * _isupper - checks if a given character is uppercase
 * @c: a character to be checked
 * Return: 1 if uppercase and 0 if else
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
	return (1);
else
	return (0);
}

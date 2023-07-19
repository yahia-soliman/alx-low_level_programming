/**
 * _islower - checks if a given character is lowercase
 * @c: a character to be checked
 * Return: 1 if lowercase and 0 if else
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
	return (1);
else
	return (0);
}

/**
 * _strlen_recursion - counts the length of a string
 * @s: location of the first character of the string
 * Return: (length of the string)
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

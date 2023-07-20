/**
 * _isdigit - checks if a given character is digit
 * @c: a character to be checked
 * Return: 1 if digit and 0 if else
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
	return (1);
else
	return (0);
}

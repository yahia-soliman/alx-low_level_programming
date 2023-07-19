/**
 * _isalpha - checks for alphabetic character
 * @c: a character to be checked
 * Return: 1 if alphabetic, and 0 if else
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	return (1);
else
	return (0);
}

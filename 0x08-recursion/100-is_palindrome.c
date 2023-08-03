char *loc_null(char *s);
int is_pal(char *left, char *right);

/**
 * is_palindrome - checks if a string is palindrome
 * @s: string
 * Return: true (1) or false (0)
 */
int is_palindrome(char *s)
{
	char *last = loc_null(s) - 1;

	return (is_pal(s, last));
}

/**
 * is_pal - checks  if a  string  is   palindrome
 * @left:  location of the first char (from  left)
 * @right: location of the  last char (from right)
 * Return: true (1) or false (0)
 */
int is_pal(char *left, char *right)
{
	if (*left != *right)
		return (0);
	if (left >=	right)
		return (1);
	else
		return (is_pal(left + 1, right - 1));
}

/**
 * loc_null - locates null char of string in memory
 * @s: location of the first character of the string
 * Return: memory adress of the null character
 */
char *loc_null(char *s)
{
	if (*s == 0)
		return (s);
	else
		return (loc_null(s + 1));
}

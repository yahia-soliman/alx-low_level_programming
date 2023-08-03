/**
 * _sqrt - calculates the sqare root
 * @n:     for number n
 * @i: used for recursion
 * Return: square root
 */
int _sqrt(int i, int n)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (_sqrt(i + 1, n));
}

/**
 * _sqrt_recursion - calculates the sqare root
 * @n:     for number n
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(0, n));
}

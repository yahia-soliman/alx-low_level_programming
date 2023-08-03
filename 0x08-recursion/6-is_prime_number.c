/**
 * _sqrt - calculates the sqare root
 * @n:     for number n
 * @i: used for recursion
 * Return: square root
 */
int _sqrt(int i, int n)
{
	if (i * i < n)
		return (_sqrt(i + 1, n));
	else
		return (i);
}

/**
 * is_prm - checks if number n is prime
 * @n:                number n
 * @j: check if n devidable by j
 * @i: max value for j
 * Return: prime (1) not prime (0)
 */
int is_prm(int j, int i, int n)
{
	if (n % j == 0)
		return (0);
	else if (j > i)
		return (1);
	else
		return (is_prm(j + 2, i, n));
}

/**
 * is_prime_number - checks if number n is prime
 * @n:                         number n
 * Return: prime (1) not prime (0)
 */
int is_prime_number(int n)
{
	int i = _sqrt(0, n);

	if (n % 2 == 0 || n < 2)
		return (0);
	else
		return (is_prm(3, i, n));
}

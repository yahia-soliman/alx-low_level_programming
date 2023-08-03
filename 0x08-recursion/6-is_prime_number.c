int _sqrt(int i, int n);
int is_prm(int j, int i, int n);


/**
 * is_prime_number - checks if number n is prime
 * @n:                         number n
 * Return: prime (1) not prime (0)
 */
int is_prime_number(int n)
{
	int i = _sqrt(0, n);

	if (n == 2)
		return (1);
	if (n % 2 == 0 || n < 2)
		return (0);
	else
		return (is_prm(3, i, n));
}

/**
 * _sqrt - calculates the sqare root (rounded up)
 * @n:     for number n
 * @i:	   recmmonded to be 0; used for recursion
 * Return: max value to use in the checks
 */
int _sqrt(int i, int n)
{
	if (i * i < n)
		return (_sqrt(i + 1, n));
	else
		return (i);
}

/**
 * is_prm - helps to check if a number is prime
 *			checks if number n is not devisible
 *			by each other numbers from  j to  i
 *
 * @n: number n
 * @j: recommended to be (3); the first check
 * @i: max value for j
 * Return: not devisible (1) or devisible (0)
 */
int is_prm(int j, int i, int n)
{
	if (n % j == 0)
		return (0);
	if (j > i)
		return (1);
	else
		return (is_prm(j + 2, i, n));
}

/**
 * binary_to_uint - converts from binary to decimal
 * @b: string of the  binary number consists of 0/1
 *
 * Return: the number in decimal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int c, sum = 0;

	if (!b)
		return (0);
	while (*b)
	{
		sum = sum << 1;
		c = *b - '0';
		if (c == 1)
			sum++;
		else if (c)
			return (0);
		b++;
	}

	return (sum);
}

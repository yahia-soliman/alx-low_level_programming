/**
 * flip_bits - calculates how many bits you need to flip to get
 * @n:         from one number to another, for example (n to m)
 * @m:         or vise-versa (m to n).
 *
 * Return: how many bits needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	if (n || m)
		return (((n ^ m) & 1) + flip_bits(n >> 1, m >> 1));
	return (0);
}

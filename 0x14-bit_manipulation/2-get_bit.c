/**
 * get_bit - returns the value of a specefied bit
 * @n: number to  check from
 * @index: of the bit needed
 *
 * Return: 0 or 1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return (n >> index & 1);
}

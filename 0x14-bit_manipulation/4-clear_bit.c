/**
 * clear_bit - sets the bit at index to 0
 * @n:     adress of the number to modify
 * @index: at  which the  bit   to modify
 *
 * Return: 1 if success of -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 1 << sizeof(*n))
		return (-1);
	*n = *n ^ 1 << index;
	return (1);
}

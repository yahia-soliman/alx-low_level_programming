/**
 * set_bit - sets the bit value at index to 1
 * @n:       adress of the number to modify
 * @index:   of the bit to write 1 into
 *
 * Return: 1 if success of -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 1 << sizeof(*n))
		return (-1);
	*n = *n | 1 << index;
	return (1);
}

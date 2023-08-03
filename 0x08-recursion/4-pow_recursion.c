/**
 * _pow_recursion - calculates the power y of the number n
 * @x: the number
 * @y: the power
 * Return: n to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}

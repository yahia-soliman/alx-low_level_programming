/**
 * reverse_array - check the code
 * @a: an array of integers
 * @n: the number of elements to swap
 */
void reverse_array(int *a, int n)
{
	int i = 0, tmp;

	while (i < n)
	{
		n--;
		tmp = a[i];
		*(a + i) = a[n];
		*(a + n) = tmp;
		i++;
	}
}

#include <stdio.h>
int palindrome(int n)
{
	char str[15];
	int l, r;

	sprintf(str, "%d", n);
	l = r = 0;
	while (str[r])
		r++;

	while (l < r--)
	{
		if (str[r] != str[l++])
			return (0);
	}

	return (1);
}

int main(void)
{
	int i, j = 1000, max = 0, prod = 0;

	while (j--)
	{
		i = j + 1;
		while (i--)
		{
			prod = i * j;
			if (prod > max && palindrome(prod))
				max = prod;
		}
	}
	printf("%d", max);

	return (0);
}

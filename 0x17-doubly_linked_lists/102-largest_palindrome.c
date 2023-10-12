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

	while (j-- > 100 && prod >= max)
	{
		i = j;
		do {
			i--;
			prod = i * j;
			if (prod > max && palindrome(prod))
				max = prod;
		} while (i > 100 && prod >= max);
	}
	printf("%d", max);

	return (0);
}

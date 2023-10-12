#include <stdio.h>
int palindrome(int n)
{
	char str[10];
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
	int i, j = 1000;

	while (j--)
	{
		i = j + 1;
		while (i--)
		{
			if (palindrome(i * j))
			{
				printf("%d = %d * %d\n", i * j, i, j);
				return (0);
			}
		}
	}

	printf("not found\n");
	return (1);
}

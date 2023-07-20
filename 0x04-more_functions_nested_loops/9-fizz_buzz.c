/* 3 is Fizz 5 is Buzz */

#include <stdio.h>

/**
 * main - everything we need
 * Return: 0 and nothing else
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");
		if (i % 3 && i % 5)
			printf("%d", i);

		if (i < 100)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}

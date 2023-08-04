#include <stdlib.h>
#include <stdio.h>
/**
 * main - program that prints its name
 * @argc: command line arguments count
 * @argv: array of command's arguments
 * Return: success
 */
int main(int argc, char **argv)
{
	int i, res, count = 0;
	int coin[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	res = atoi(argv[1]);
	if (res < 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		if (res / coin[i])
		{
			count += res / coin[i];
			res = res % coin[i];
		}
	}
	printf("%d\n", count);
	return (0);
}

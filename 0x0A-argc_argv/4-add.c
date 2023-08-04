#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints its name
 * @argc: command line arguments count
 * @argv: array of command's arguments
 * Return: success
 */
int main(int argc, char **argv)
{
	int i, sum = 0;

	*argv = "0";
	while (argc--)
	{
		i = 0;
		while (*(*argv + i))
		{
			if ((*(*argv + i) < '0' || *(*argv + i) > '9')
				&& *(*argv + i) != '-')
			{
				printf("Error\n");
				return (1);
			}
			i++;
		}
		sum += atoi(*argv);
		argv++;
	}
	printf("%d\n", sum);
	return (0);
}

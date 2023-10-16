#include <stdio.h>
/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 * Return: the converted number
 */
int _atoi(char *s)
{
	int total = 0, signal = 1, i = 0;

	if (!s)
		return 0;

	while (s[i] && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			signal *= -1;
		i++;
	}
	while (s[i] && s[i] >= '0' && s[i] <= '9')
	{
		total *= 10;
		total += s[i] - '0';
		i++;
	}
	return (total * signal);
}

int main(void)
{
    int nb;

    nb = _atoi("98");
    printf("%d\n", nb);
    nb = _atoi("-402");
    printf("%d\n", nb);
    nb = _atoi("          ------++++++-----+++++--98");
    printf("%d\n", nb);
    nb = _atoi("12313123214748364");
    printf("%d\n", nb);
    nb = _atoi("0");
    printf("%d\n", nb);
    nb = _atoi("Suite 402");
    printf("%d\n", nb);
    nb = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
    printf("%d\n", nb);
    nb = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
    printf("%d\n", nb);
    return (0);
}

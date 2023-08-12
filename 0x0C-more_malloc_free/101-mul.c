#include <stdlib.h>
#include <unistd.h>

int _putchar(char c);
void error(void);
void prnt(char *s);
unsigned int lens(char *s);
char *alloc_zero(unsigned int n);
void revs(char *src, char *dst, unsigned int n);
void adds(char *src, char *dst, char *end, int rem);
char *mulc(char *str, char num, unsigned int n, unsigned int i);

/**
 * main - multiplies two positive numbers
 * @ac:   count of command line arguments
 * @av:   pointer to the passed arguments
 * Return: 0 for success or 98 for failur
 */
int main(int ac, char **av)
{
	unsigned int i, c1, c2, cr;
	char *n1, *n2, *mulr, *res;

	if (ac != 3)
		error();
	/* removing 0s from the left of numbers */
	for (i = 1; i <= 2; i++)
	{
		while (av[i][0] == '0' && av[i][1] != '\0')
			*(av + i) += 1;
		if (av[i][0] == '0' && av[i][1] == '\0')
		{
			prnt("0");
			return (0);
		}
	}
	/* make shorter value first */
	if (lens(av[2]) < lens(av[1]))
	{
		*(av + 0) = av[1];
		*(av + 1) = av[2];
		*(av + 2) = av[0];
	}
	/* count the needed space for the result */
	c1 = lens(av[1]);
	c2 = lens(av[2]);
	cr = c1 + c2;

	n1 = alloc_zero(c1);
	n2 = alloc_zero(cr);
	res = alloc_zero(cr);
	revs(av[1], n1, c1);
	revs(av[2], n2, c2);

	for (i = 0; i < c1; i++)
	{
		mulr = mulc(n2, n1[i], cr, i);
		adds(mulr, res, mulr + cr, 0);
		free(mulr);
	}

	revs(res, n2, cr);

	if (*n2 == '0')
		prnt(n2 + 1);
	else
		prnt(n2);

	free(n1);
	free(n2);
	free(res);
	return (0);
}

/**
 * error - reports error and exits the program
 */
void error(void)
{
	prnt("Error");
	exit(98);
}

/**
 * prnt - prints a string followed by new line
 * @s: pointer to the string in memory
 */
void prnt(char *s)
{
	if (*s == 0)
		_putchar('\n');
	else
	{
		_putchar(*s);
		prnt(s + 1);
	}
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1 else -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * lens - counts the length of a string
 * @s: location of the first character of the string
 * Return: (length of the string)
 */
unsigned int lens(char *s)
{
	if (*s == 0)
		return (0);
	if (*s < '0' || *s > '9')
		error();
	return (1 + lens(s + 1));
}

/**
 * alloc_zero - allocates array of char '0'
 * @n:          number of bytes to allocate
 * Return: allocated memory for  the  array
 */
char *alloc_zero(unsigned int n)
{
	char *r;

	r = malloc(n);
	if (r == NULL)
	{
		free(r);
		error();
	}

	*(r + n) = '\0';
	while (n--)
		*(r + n) = '0';
	return (r);
}

/**
 * revs - makes a revesed copy of string
 * @src:  the string we want to  reverse
 * @dst:  destnation to save  a new copy
 * @n:    number of charcaters to   copy
 */
void revs(char *src, char *dst, unsigned int n)
{
	int i = 0;

	while (n)
	{
		n--;
		*(dst + i) = *(src + n);
		i++;
	}
}

/**
 * adds - adds n2 over n1
 * @src: pointer to n2 as char
 * @dst: pointer to n1 as char
 * @end: end of n1 (n1 + lens(n1))
 * @rem: make it 0
 */
void adds(char *src, char *dst, char *end, int rem)
{
	int res = 0;

	if (src < end)
	{
		res = rem + *src - '0' + *dst - '0';
		*dst = '0' + res % 10;
		rem = res / 10;
		adds(src + 1, dst + 1, end, rem);
	}
}

/**
 * mulc - multiplies a string of numbers by 1 number
 * @str:  pointer to long number  string  (reversed)
 * @num:  the value  we want to multiply by   (char)
 * @n:    the index  of  the   last   digit  to copy
 * @i:    the index  of  the   first  digit  to copy
 * Return: pointer to the result
 */
char *mulc(char *str, char num, unsigned int n, unsigned int i)
{
	int res, rem = 0;
	unsigned int j = 0;
	char *r = alloc_zero(n);

	while (i < n)
	{
		res = rem + ((num - '0') * (str[j] - '0'));

		*(r + i) = '0' + res % 10;
		rem = res / 10;

		i++;
		j++;
	}
	return (r);
}

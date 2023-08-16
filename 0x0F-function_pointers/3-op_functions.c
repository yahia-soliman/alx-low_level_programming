#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - calculates sum of two numbers
 * @a:     first  number
 * @b:     second number
 * Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates difference of two numbers
 * @a:     first  number
 * @b:     second number
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - calculates muliple of two numbers
 * @a:     first  number
 * @b:     second number
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - calculates division of two numbers
 * @a:     first  number
 * @b:     second number
 * Return: a / b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		puts("Error");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - calculates remainder of a division
 * @a:     first  number
 * @b:     second number
 * Return: a % b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		puts("Error");
		exit(100);
	}
	return (a % b);
}

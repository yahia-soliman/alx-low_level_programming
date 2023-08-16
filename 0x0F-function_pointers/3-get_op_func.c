#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - selects the correct function
 * @s:        pointer to char of the operator
 * Return:   function that does the operation
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
					};
	int i = 0;

	while (i < 5 && s != NULL)
	{
		if (*s == *((*(ops + i)).op))
			return ((*(ops + i)).f);
		i++;
	}
	return (NULL);
}

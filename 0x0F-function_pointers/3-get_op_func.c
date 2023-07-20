#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * get_op_func - function entry point.
 * Description: selects the correct function to perform the operation
 * asked by the user. You’re not allowed to declare any
 * other function.
 * @s: a pointer to the string containg the operator.
 * Return:apointer to the function that coresponds to
 * the operator given as parameter.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t op[] = {{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};
	int i;

	i = 0;
	while (i < 5)
	{
		if (strcmp(s, op[i].op) == 0)
			return (op[i].f);
		i++;
	}
	return (NULL);
}

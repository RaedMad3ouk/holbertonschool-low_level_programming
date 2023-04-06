#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - selects a function to perform
 * @s: operator
 * Return: pointer to function
 */

int (*get_op_func(char *s))(int a, int b)
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

	while (ops[i].op)
	{
		if (*s == *ops[i].op)
			return (ops[i].f);
		i++;
	}
	return (ops[i].f);
}
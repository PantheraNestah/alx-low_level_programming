#include "3-calc.h"

/**
 * get_op_func - function pointer to function that
 * selects correct function to perform operation
 * @s: operator passed as argument to program
 * Return: operator and function on success, NULL on failure
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

	while (i < 5)
	{
		if (*ops[i].op == *s && !(*(s + 1)))
			return (ops[i].f);
		i++;
	}
	return (NULL);
}

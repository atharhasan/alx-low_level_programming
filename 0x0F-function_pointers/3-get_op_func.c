#include "3-calc.h"

/**
 * get_op_func - function
 *
 * Description: contain the function that selects the correct function
 *
 * @s: input
 *
 * Return: the right function pointer
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
		if (s && s[i] == ops[i].op[0] && !s[1])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}

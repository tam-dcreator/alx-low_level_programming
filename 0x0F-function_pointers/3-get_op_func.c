#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 *get_op_func - Function that selects the correct operations function
 *@s: The operation
 *
 *Return: Pointer to the function that corresponds to, s or null
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{"NULL", NULL},
	};
	int i = 0;

	while (i < 6)
	{
		if (strcmp(s, ops[i].op) == 0)
			return ((ops[i].f));
		i++;
	}
	return (NULL);
}

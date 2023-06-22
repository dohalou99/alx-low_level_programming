#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - function that operator from main
 * @s: The input operator passed as args.
 *
 * Return:return null or the function corresponding
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int j = 0;

	while (ops[j].op != NULL && *(ops[j].op) != *s)
		j++;

	return (ops[j].f);
}


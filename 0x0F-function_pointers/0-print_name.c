#include "function_pointers.h"
#include <string.h>

/**
 * print_name - function
 *
 * Descreption: print name
 *
 * @name: input
 * @f: input function
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

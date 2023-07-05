#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - function
 *
 * Description:function that prtins a string in reverse.
 *
 * @s: input
*/

void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

#include "main.h"
#include <string.h>

/**
 * print_rev - function
 *
 * Description: prints a string, in reverse, followed by a new line.
 *
 * @s: input
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

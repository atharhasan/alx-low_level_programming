#include "main.h"
#include <string.h>

/**
 * puts_half - function
 *
 * Description: unction that prints half of a string, followed by a new line.
 *
 * @str: input
*/
void puts_half(char *str)
{
	int i, len, a;

	len = strlen(str);
	i = len / 2;

	if (i % 2 == 1)
	{
		i = (len + 2) / 2;
		for (a = i; a < len; a++)
			_putchar(str[a]);
	} else
	{
		for (a = i; a < len; a++)
			_putchar(str[a]);
	_putchar('\n');
}

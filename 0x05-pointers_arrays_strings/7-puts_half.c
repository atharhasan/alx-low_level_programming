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
	int i, len;

	len = strlen(str);
	for (i = len / 2; i < len; i++)
	{
		if (len % 2 != 0)
			_putchar(str[i + 1]);
		else
			_putchar(str[i]);
	}
	_putchar('\n');
}

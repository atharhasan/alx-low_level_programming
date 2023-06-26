#include "main.h"
#include <string.h>

/**
 * puts2 - function
 *
 * Description: prints every other character of a string
 *
 * @str: input
*/

void puts2(char *str)
{
	int i, len;

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (i == 0 || i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}

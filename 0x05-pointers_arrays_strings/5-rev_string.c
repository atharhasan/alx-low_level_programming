#include "main.h"
#include <string.h>

/**
 * rev_string - function
 *
 * Description: function that reverses a string
 *
 * @s: input
*/

void rev_string(char *s)
{
	int i, len, temp;

	temp = *s;
	len = strlen(s);

	for (i = len; i > 0; i--)
	{
		_putchar(s[i]);
	}
}

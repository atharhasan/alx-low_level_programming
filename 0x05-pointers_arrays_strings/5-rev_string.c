#include "main.h"

/**
 * rev_string - function
 *
 * Description: function that reverses a string
 *
 * @s: input
*/

void rev_string(char *s)
{
	int i;

	for (i = 10; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

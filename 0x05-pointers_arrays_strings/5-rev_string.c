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
	int i, len;
	char ch;

	len = strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		ch = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = ch;
	}
}

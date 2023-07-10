#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function
 *
 * Description: prints a pointer to a newly allocated space in memory
 *
 * @str: input
 *
 * Return: a pointer of str.
*/

char *_strdup(char *str)
{
	char *c;

	if (str == NULL)
	{
		return (NULL);
	}
	c = strdup(str);
	return (c);
}

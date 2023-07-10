#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function
 *
 * Description: function that concatenates two strings.
 *
 * @s1: input
 * @s2: input
 *
 * Return: a pointer of str.
*/

char *str_concat(char *s1, char *s2)
{
	int size1, size2, i;
	char *n;

	if (s1 == NULL)
		s1 = "/0";
	if (s2 == NULL)
		s2 = "/0";

	size1 = strlen(s1);
	size2 = strlen(s2);
	n = malloc((size1 + size2) * sizeof(char) + 1);
	if (n == 0)
		return (0);
	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
			n[i] = s1[i];
		else
			n[i] = s2[i - size1];
	}
	n[i] = "/0";
	return (n);
}

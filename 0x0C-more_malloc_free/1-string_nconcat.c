#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * string_nconcat - function
 *
 * Description: function that concatenates two strings.
 *
 * @s1: array of char
 * @s2: array of char
 * @n: number that must s2 don't great than it
 *
 * Return: a pointer of c.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int size1, size2, i, j;
	char *c;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	size1 = strlen(s1);
	size2 = strlen(s2);
	c = malloc((size1 + size2) * sizeof(char) + 1);
	if (c == NULL)
		return (0);
	for (i = 0; i < size1; i++)
	{
		c[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		c[i] = s2[j];
		i++;
	}
	c[i] = '\0';
	return (c);
}

#include "main.h"
#include <stdlib.h>

/**
 * create_array - function
 *
 * Description: that prints creates an array of char.
 *
 * @c: input
 * @size: input
 *
 * Return: the value of pointer
*/

char *create_array(unsigned int size, char c)
{

	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);
	while (size--)
	{
		n[size] = c;
	}
	return (n);
}

#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function
 *
 * Description: function that allocates memory for an array
 *
 * @nmemb: input
 * @size: input
 *
 * Return: nothing
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *m;

	if (nmemb == 0 || size == 0)
		return (0);
	m = calloc(size, nmemb);
	if (m == 0)
	{
		return (0);
	}
	return (m);
}

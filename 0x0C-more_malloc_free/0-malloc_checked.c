#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * malloc_checked - function
 *
 * Description: function that that allocates memory using malloc
 *
 * @b: input
 *
 * Return: nothing
*/

void *malloc_checked(unsigned int b)
{
	int *x = malloc(b);

	if (x == NULL)
	{
		exit(98);
	}
	return (x);
}

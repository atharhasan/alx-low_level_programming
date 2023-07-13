#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _realloc - nested loop to make grid
 *
 * Descreption: function that reallocates a memory block using malloc and free
 *
 * @ptr: the pointer of array
 * @old_size: old size of array
 * @new_size: new size of array
 *
 * Return: ptr
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *k;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		k = realloc(ptr, new_size);
		if (k == NULL)
			return (NULL);
		return (k);
	}
	if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		k = realloc(ptr, new_size);
		if (k == NULL)
			return (NULL);
		return (k);
	}
}

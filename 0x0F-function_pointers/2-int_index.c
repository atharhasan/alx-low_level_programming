#include "function_pointers.h"
#include <string.h>
#include <stdlib.h>

/**
 * int_index - function
 *
 * Descreption:function that searches for an integer.
 *
 * @array: input
 * @size: input
 * @cmp: input
 *
 * Return: he index of the first element
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}

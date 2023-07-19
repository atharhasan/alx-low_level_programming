#include "function_pointers.h"
#include <string.h>

/**
 * array_iterator - function
 *
 * Descreption:function given as a parameter on each element of an array
 *
 * @array: input
 * @size: input
 * @action: input
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
	{
		while (array <= end)
			action(*array++);
	}
}

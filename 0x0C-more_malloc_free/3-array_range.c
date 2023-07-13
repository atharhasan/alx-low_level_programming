#include "main.h"
#include <stdlib.h>

/**
 * array_range - nested loop to make grid
 *
 * @min: input
 *
 * @max: height input
 *
 * Return: the pointer to the newly created array
*/

int *array_range(int min, int max)
{
	int *str, len, i;

	if (min > max)
		return (0);
	len = max - min + 1;
	str = malloc(len * sizeof(int));

	if (str == 0)
		return (0);
	for (i = 0; i < len; i++)
	{
		str[i] = min++;
	}
	return (str);
}

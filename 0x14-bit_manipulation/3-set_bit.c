#include "main.h"

/**
 * set_bit - function sets the value of a bit to 1 at a given index.
 * @index: the postion that will returned value
 * @n: the value
 *
 * Return: 1 if worked -1 if no
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n |= 1l << index));
}

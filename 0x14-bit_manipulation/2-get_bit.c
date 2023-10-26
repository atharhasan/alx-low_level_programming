#include "main.h"

/**
 * get_bit - function returns the value of a bit at a given index.
 * @index: the postion that will returned value
 * @n: the value
 *
 * Return: the value of bit
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (n >> index & 1);
}

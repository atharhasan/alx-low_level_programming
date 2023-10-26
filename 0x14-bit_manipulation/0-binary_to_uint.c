#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - function
 *
 * Description: converts a binary number to an unsigned int.
 *
 * @b: input
 *
 * Return: the converted number
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int res;
	int i;
	if (b == NULL)
		return(0);

	for (i=0; b[i] < '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
			
	res = (res << 1) | (b[i] - '0');
	}

	return (res);
}
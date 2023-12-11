#include "main.h"
#include <string.h>

/**
 * _memcpy - function
 *
 * Description: function that copies memory area
 *
 * @dest: input
 * @src: input
 * @n: input
 *
 * Return: dest pointer
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}

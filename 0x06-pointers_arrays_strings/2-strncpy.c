#include "main.h"
#include <string.h>

/**
 * _strncpy - function
 *
 * Description: function that copies a string
 *
 * @dest: input
 * @src: input
 * @n: input
 *
 * Return: 0 always
*/

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}

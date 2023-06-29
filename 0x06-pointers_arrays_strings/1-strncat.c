#include "main.h"
#include <string.h>

/**
 * _strncat - function
 *
 * Description: function that concatenates two strings
 *
 * @dest: input
 * @src: input
 * @n: input
 *
 * Return: 0 always
*/

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (0);
}

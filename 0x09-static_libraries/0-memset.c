#include "main.h"
#include <string.h>

/**
 * _memset - function
 *
 * Description:function that fills memory with a constant byte
 *
 * @s: input
 * @b: input
 * @n: input
 *
 * Return: s a pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}

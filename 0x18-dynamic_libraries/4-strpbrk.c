#include "main.h"
#include <string.h>

/**
 * _strpbrk - function
 *
 * Description: function that searches a string for any of a set of bytes
 *
 * @s: input
 * @accept: input
 *
 * Return: the character that matches
*/

char *_strpbrk(char *s, char *accept)
{
	char *r;

	r = strpbrk(s, accept);
	return (r);
}

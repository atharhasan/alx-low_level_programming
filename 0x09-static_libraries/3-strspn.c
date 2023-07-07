#include "main.h"
#include <string.h>

/**
 *_strspn - function
 *
 * Description: function that gets the length of a prefix substring
 *
 * @s: input
 * @accept: input
 *
 * Return: the length of a prefix substring
*/

unsigned int _strspn(char *s, char *accept)
{
	int len;

	len = strspn(s, accept);
	return (len);
}

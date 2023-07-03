#include "main.h"
#include <string.h>

/**
 * _strchr - function
 *
 * Description: function that locates a character in a string.
 *
 * @s: input
 * @c: input
 *
 * Return: pointer to the first c in the string s, or NULL if not found
*/

char *_strchr(char *s, char c)
{
	strchr(s, c);
	return (s);
}

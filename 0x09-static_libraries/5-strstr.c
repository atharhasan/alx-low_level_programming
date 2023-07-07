#include "main.h"
#include <string.h>

/**
 * _strstr - function
 *
 * Description: function that locates a substring
 *
 * @haystack: input
 * @needle: input
 *
 * Return: pointer to the beginning of the located substring
*/

char *_strstr(char *haystack, char *needle)
{
	char *r;

	r = strstr(haystack, needle);
	return (r);
}

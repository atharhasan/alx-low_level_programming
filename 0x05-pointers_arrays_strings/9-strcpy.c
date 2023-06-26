#include "main.h"
#include <string.h>

/**
 * _strcpy - function
 *
 * Description: copies the string pointed to by src.
 *
 * @src: input
 * @dest: input
 *
 * Return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return *(dest);
}

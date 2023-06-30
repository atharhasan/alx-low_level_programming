#include "main.h"
#include <string.h>

/**
 * string_toupper - function
 *
 * Description: changes all lowercase letters of a string to uppercase
 *
 * @a: input
 *
 * Return: char value
*/

char *string_toupper(char *a)
{
	toupper(a);
	return (a);
}

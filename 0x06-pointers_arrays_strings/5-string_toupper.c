#include "main.h"
#include <ctype.h>

/**
 * string_toupper - function
 *
 * Description: changes all lowercase letters of a string to uppercase
 *
 * @str: input
 *
 * Return: char value
*/

char *string_toupper(char *str)
{
	char ch;

	ch = toupper(str);
	return (ch);
}

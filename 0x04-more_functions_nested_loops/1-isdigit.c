#include "main.h"
#include <ctype.h>

/**
 * _isdigit - function
 *
 * Description: function that checks for a digit
 *
 * @c: input param
 *
 * Return: 1 for true 0 for false
*/

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}

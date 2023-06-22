#include "main.h"
#include <ctype.h>

/**
 * _isupper - function
 *
 * Description: function that can check uppercase char
 *
 * @c: input param
 *
 * Return: 1 for true 0 for false
*/

int _isupper(int c)
{
	if (isupper(c) == true)
		return (1);
	else
		return (0);

}

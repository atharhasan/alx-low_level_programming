#include "main.h"
#include <ctype.h>
/**
 * _isalpha - function
 *
 * Description: function that can check c is alpha
 *
 * @c: parameter is char that want to check
 *
 * Return: 1 success 0 false
*/

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
		return (0);
}

#include "main.h"
#include <ctype.h>
/**
 * _islower - function
 *
 * Description: function that can check for lowercase character
 *
 * @c: parameter is char that want to check
 *
 * Return: 1 success 0 false
*/

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
		return (0);
}

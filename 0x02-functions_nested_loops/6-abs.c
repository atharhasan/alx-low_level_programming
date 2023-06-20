#include "main.h"
#include <stdlib.h>
/**
 * _abs - function
 *
 * Description: function that computes the absolute value of an integer.
 *
 * @r: parameter is char that want to check
 *
 * Return: 0 success
*/

int _abs(int r)
{
	int n = abs(r);

	_putchar(n + '0');
	return (0);
}

#include "main.h"
#include <stdlib.h>
#include <math.h>
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
	if (r < 0)
	{
		r = (-1) * r;
		_putchar(r);
	}
	_putchar(r);

	return (0);
}

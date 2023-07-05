#include "main.h"
#include <math.h>

/**
 * _pow_recursion - function
 *
 * Description:function that returns the value of x raised to the power of y.
 *
 * @x: input
 * @y: input
 *
 * Return: the value of x power of y or -1 if y lower 0
*/

int _pow_recursion(int x, int y)
{
	int res;

	if (y < 0)
	{
		return (-1);
	}
	res = pow(x, y);
	return (res);
}

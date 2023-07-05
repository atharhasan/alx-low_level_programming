#include "main.h"
#include <string.h>

/**
 * _sqrt_recursion - function
 *
 * Description:function that returns the natural square root of a number
 * @n: input
 *
 * Return: the square root number
*/

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - function
 *
 * Description:function that return the square val
 *
 * @val: input
 * @n: input
 *
 * Return: value
*/

int square(int n, int val)
{
	if (val * val == n)
	{
		return (val);
	} else if (val * val < n)
	{
		return (square(n, val + 1));
	} else
		return (-1);
}

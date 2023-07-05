#include "main.h"
#include <string.h>

/**
 * factorial - function
 *
 * Description:function that returns the factorial of a given number.
 *
 * @n: input
 *
 * Return: factorial number or 1 if n is 0
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

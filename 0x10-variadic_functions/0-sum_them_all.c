#include "variadic_functions.h"

/**
 * sum_them_all - function that sum of all its parameters
 *
 * @n: unsigned num
 *
 * Return: the sum of all its parameters
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list li;
	int i, sum = 0;

	if (n == 0)
		return (0);
	va_start(li, n);

	for (i = 0; i < n; i++)
		sum += va_arg(li, unsigned int);
	va_end(li);
	return (sum);
}

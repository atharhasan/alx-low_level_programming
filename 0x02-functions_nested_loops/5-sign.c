#include "main.h"
/**
 * print_sign - function
 *
 * Description: function that can print the sign of number
 *
 * @n: parameter is want to check
 *
 * Return: 1 success 0 zero -1 if number is negative
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	_putchar('-');
	return (-1);
}

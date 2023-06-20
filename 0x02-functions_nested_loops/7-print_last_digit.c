#include "main.h"
#include <ctype.h>
/**
 * print_last_digit - function
 *
 * Description: function that prints the last digit of a number.
 *
 * @c: parameter is char that want to check
 *
 * Return: 0 success
*/

int print_last_digit(int c)
{
	int n = c % 10;
	_putchar(n);

	return (0);
}

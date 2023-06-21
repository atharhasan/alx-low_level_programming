#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function
 *
 * Description: function that can print numbers to 89
 *
 * @n: int param
*/

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		i = n;
		while (i >= 98)
		{
			_putchar(i + '0');
			_putchar(',');
			_putchar(' ');
			i--;
		}
	} else
	{
		i = n;

		while (i <= 98)
		{
			_putchar(i + '0');
			_putchar(',');
			_putchar(' ');
			i++;
		}
	}
	_putchar('\n');
}

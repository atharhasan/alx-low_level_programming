#include "main.h"

/**
 * print_line - function
 *
 * Description: function that can print _ char
 *
 * @n: input of _ count
*/

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	} else
	{
		_putchar('\n');
	}
}
